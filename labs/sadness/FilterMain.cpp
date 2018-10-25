#include <stdio.h>
#include "cs1300bmp.h"
#include <iostream>
#include <fstream>
#include "Filter.h"

#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")

using namespace std;

#include "rdtsc.h"

//
// Forward declare the functions
//
Filter * readFilter(string filename);
double applyFilter(Filter *filter, cs1300bmp *input, cs1300bmp *output);

int
main(int argc, char **argv)
{

  if ( argc < 2) {
    fprintf(stderr,"Usage: %s filter inputfile1 inputfile2 .... \n", argv[0]);
  }

  //
  // Convert to C++ strings to simplify manipulation
  //
  string filtername = argv[1];

  //
  // remove any ".filter" in the filtername
  //
  string filterOutputName = filtername;
  string::size_type loc = filterOutputName.find(".filter");
  if (loc != string::npos) {
    //
    // Remove the ".filter" name, which should occur on all the provided filters
    //
    filterOutputName = filtername.substr(0, loc);
  }

  Filter *filter = readFilter(filtername);

  double sum = 0.0;
  int samples = 0;

  for (int inNum = 2; inNum < argc; inNum++) {
    string inputFilename = argv[inNum];
    string outputFilename = "filtered-" + filterOutputName + "-" + inputFilename;
    struct cs1300bmp *input = new struct cs1300bmp;
    struct cs1300bmp *output = new struct cs1300bmp;
    int ok = cs1300bmp_readfile( (char *) inputFilename.c_str(), input);

    if ( ok ) {
      double sample = applyFilter(filter, input, output);
      sum += sample;
      samples++;
      cs1300bmp_writefile((char *) outputFilename.c_str(), output);
    }
    delete input;
    delete output;
  }
  fprintf(stdout, "Average cycles per sample is %f\n", sum / samples);

}

struct Filter *
readFilter(string filename)
{
  ifstream input(filename.c_str());

  if ( ! input.bad() ) {
    int size = 0;
    input >> size;
    Filter *filter = new Filter(size);
    int div;
    input >> div;
    filter -> setDivisor(div);
    for (int i=0; i < size; i++) {
      for (int j=0; j < size; j++) {
	int value;
	input >> value;
	filter -> set(i,j,value);
      }
    }
    return filter;
  } else {
    cerr << "Bad input in readFilter:" << filename << endl;
    exit(-1);
  }
}


double applyFilter(struct Filter *filter, cs1300bmp *input, cs1300bmp *output) {

  long long cycStart, cycStop;

  cycStart = rdtscll();

  output->width = input->width;
  output->height = input->height;
  int filter_size = filter->getSize();
  int filter_divisor = filter->getDivisor();
  int ih_minus_one = (input->height) - 1;
  int iw_minus_one = (input->width) - 1;
  int *this_pixel;
    
  for (int plane = 0; plane < 3; plane++) {
    for (int row = 1; row < ih_minus_one; row = row + 1) {
      for (int col = 1; col < iw_minus_one; col = col + 1) {
          
        this_pixel = &output->color[plane][row][col];
        *this_pixel = 0;
        
        
        for (int i = 0; i < filter_size; i++) {
          for (int j = 0; j < filter_size; j++) {
            *this_pixel =
                *this_pixel +
                (input->color[plane][row + i - 1][col + j - 1] *
                 filter->get(i, j));
          }
        }
        

        *this_pixel =
            *this_pixel / filter_divisor;

        if (*this_pixel < 0) {
          *this_pixel = 0;
        }

        if (*this_pixel > 255) {
          *this_pixel = 255;
        }
      }
    }
  }

  cycStop = rdtscll();
  double diff = cycStop - cycStart;
  double diffPerPixel = diff / (output->width * output->height);
  fprintf(stderr, "Took %f cycles to process, or %f cycles per pixel\n", diff,
          diff / (output->width * output->height));
  return diffPerPixel;
}