/* 
 * CS:APP Data Lab 
 * 
 * <Christian F. Sousa 106858563>
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

 #if 0
 /*
  * Instructions to Students:
  *
  * STEP 1: Read the following instructions carefully.
  */
 
 You will provide your solution to the Data Lab by
 editing the collection of functions in this source file.
 
 INTEGER CODING RULES:
  
   Replace the "return" statement in each function with one
   or more lines of C code that implements the function. Your code 
   must conform to the following style:
  
   int Funct(arg1, arg2, ...) {
       /* brief description of how your implementation works */
       int var1 = Expr1;
       ...
       int varM = ExprM;
 
       varJ = ExprJ;
       ...
       varN = ExprN;
       return ExprR;
   }
 
   Each "Expr" is an expression using ONLY the following:
   1. Integer constants 0 through 255 (0xFF), inclusive. You are
       not allowed to use big constants such as 0xffffffff.
   2. Function arguments and local variables (no global variables).
   3. Unary integer operations ! ~
   4. Binary integer operations & ^ | + << >>
     
   Some of the problems restrict the set of allowed operators even further.
   Each "Expr" may consist of multiple operators. You are not restricted to
   one operator per line.
 
   You are expressly forbidden to:
   1. Use any control constructs such as if, do, while, for, switch, etc.
   2. Define or use any macros.
   3. Define any additional functions in this file.
   4. Call any functions.
   5. Use any other operations, such as &&, ||, -, or ?:
   6. Use any form of casting.
   7. Use any data type other than int.  This implies that you
      cannot use arrays, structs, or unions.
 
  
   You may assume that your machine:
   1. Uses 2s complement, 32-bit representations of integers.
   2. Performs right shifts arithmetically.
   3. Has unpredictable behavior when shifting an integer by more
      than the word size.
 
 EXAMPLES OF ACCEPTABLE CODING STYLE:
   /*
    * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
    */
   int pow2plus1(int x) {
      /* exploit ability of shifts to compute powers of 2 */
      return (1 << x) + 1;
   }
 
   /*
    * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
    */
   int pow2plus4(int x) {
      /* exploit ability of shifts to compute powers of 2 */
      int result = (1 << x);
      result += 4;
      return result;
   }
 
 FLOATING POINT CODING RULES
 
 For the problems that require you to implent floating-point operations,
 the coding rules are less strict.  You are allowed to use looping and
 conditional control.  You are allowed to use both ints and unsigneds.
 You can use arbitrary integer and unsigned constants.
 
 You are expressly forbidden to:
   1. Define or use any macros.
   2. Define any additional functions in this file.
   3. Call any functions.
   4. Use any form of casting.
   5. Use any data type other than int or unsigned.  This means that you
      cannot use arrays, structs, or unions.
   6. Use any floating point data types, operations, or constants.
 
 
 NOTES:
   1. Use the dlc (data lab checker) compiler (described in the handout) to 
      check the legality of your solutions.
   2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
      that you are allowed to use for your implementation of the function. 
      The max operator count is checked by dlc. Note that '=' is not 
      counted; you may use as many of these as you want without penalty.
   3. Use the btest test harness to check your functions for correctness.
   4. Use the BDD checker to formally verify your functions
   5. The maximum number of ops for each function is given in the
      header comment for each function. If there are any inconsistencies 
      between the maximum ops in the writeup and in this file, consider
      this file the authoritative source.
 
 /*
  * STEP 2: Modify the following functions according the coding rules.
  * 
  *   IMPORTANT. TO AVOID GRADING SURPRISES:
  *   1. Use the dlc compiler to check that your solutions conform
  *      to the coding rules.
  *   2. Use the BDD checker to formally verify that your solutions produce 
  *      the correct answers.
  */
 
 
 #endif
 /* Copyright (C) 1991-2018 Free Software Foundation, Inc.
    This file is part of the GNU C Library.
 
    The GNU C Library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
 
    The GNU C Library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public
    License along with the GNU C Library; if not, see
    <http://www.gnu.org/licenses/>.  */
 /* This header is separate from features.h so that the compiler can
    include it implicitly at the start of every compilation.  It must
    not itself include <features.h> or any other header that includes
    <features.h> because the implicit include comes before any feature
    test macros that may be defined in a source file before it first
    explicitly includes a system header.  GCC knows the name of this
    header in order to preinclude it.  */
 /* glibc's intent is to support the IEC 559 math functionality, real
    and complex.  If the GCC (4.9 and later) predefined macros
    specifying compiler intent are available, use them to determine
    whether the overall intent is to support these features; otherwise,
    presume an older compiler has intent to support these features and
    define these macros by default.  */
 /* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
    synchronized with ISO/IEC 10646:2017, fifth edition, plus
    the following additions from Amendment 1 to the fifth edition:
    - 56 emoji characters
    - 285 hentaigana
    - 3 additional Zanabazar Square characters */
 /* We do not support C11 <threads.h>.  */
 
 /*my work starts here
 Syntax Note: I have my first curly brace under the function*/
 
 
 
 /* 
  * bitOr - x|y using only ~ and & 
  *   Example: bitOr(6, 5) = 7
  *   Legal ops: ~ &
  *   Max ops: 8
  *   Rating: 1
  */
 int bitOr(int x, int y) 
 {
   /*
   this abuses the ~ operator
   this one is by logic
   ~x&~y means not x and not y
   and taking ~ of what that returns is garunteed to 
   not be either x or y
   */
   return ~(~x & ~y);
 }
 /* 
  * evenBits - return word with all even-numbered bits set to 1
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 8
  *   Rating: 1
  */
 int evenBits(void) 
 {
   int m=85; 
   /* is 0x55 -> 0101 0101 */
   m+= (85<<8); 
   /* is 0x55 + 0x5500 = 0x5555*/
   m+= (85<<16); 
   /* is 0x005555 = 0x550000 = 0x555555*/
   m+= (85<<24); 
   /* is 0x00555555 + 0x55000000= 0x55555555
    0x555555555-> 0101 0101 0101 0101 0101 0101 0101 0101 which has all even bits set to 1*/
 
   return m;
 }
 /* 
  * minusOne - return a value of -1 
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 2
  *   Rating: 1
  */
 int minusOne(void) 
 {
   /*
   a defualt signed 0 is 32 bits of 0
   and we knwo that -1 is 32 bits of 1
   therefore the complement of 0 will be 32 bits of 1 = -1
   */
   return ~0;
 }
 /* 
  * allEvenBits - return 1 if all even-numbered bits in word set to 1
  *   Examples allEvenBits(0xFFFFFFFE) = 0, allEvenBits(0x55555555) = 1
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 12
  *   Rating: 2
  */
 
 int allEvenBits(int x) 
 {
   int h =85;// 85 = 0x55 =0101 0101
   h+= (85<<8);
   h+= (85<<16);
   h+= (85<<24);
   /*the above sequence creates a word where all the even bits are 1 explained in the function evenBits
   the fucion should only return true if the number put in is 0x55555555  
   and therefor x=h and h&h= h -> then h^h=0 and !0 = true (1)
  */
   return !((h&x) ^ h);
 }
 /* 
  * anyOddBit - return 1 if any odd-numbered bit in word set to 1
  *   Examples anyOddBit(0x5) = 0, anyOddBit(0x7) = 1
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 12
  *   Rating: 2
  */
 
 
 int anyOddBit(int x) 
 {
     int m= 170;
     m+= (170<<8);
     m+= (170<<16);
     m+= (170<<24);
     return !!(m&x);
     /* I first use the same bitmask concept to create a number that in 1010 ..
     m&x will return will give a binary number !=0 if any of the odd numberd bits was set to 0
     then the first ! will make it 0 and the second will turn it back to 1
     if none of the odd bits are one m&x will return 0 and !!(0)=0;*/
 }
 /* 
  * byteSwap - swaps the nth byte and the mth byte
  *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
  *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
  *  You may assume that 0 <= n <= 3, 0 <= m <= 3
  *  Legal ops: ! ~ & ^ | + << >>
  *  Max ops: 25
  *  Rating: 2
  */
 int byteSwap(int x, int n, int m) 
 {
   int mask1 = 0xFF<< (n<<3);
   int mask2= 0xFF<<(m<<3);
   int bn, bm, anti_mask;
   anti_mask= (mask1 | mask2) ^ x;
   /* this makes a inverse of the two masks that will be used to clear those data slots*/
   /*mask1 is 15<< (x<<3) you want to bit shift by x*3 but you cant use multiplication*/
   bn = x & mask1;
   bm = x & mask2;
   bn= (bn>>(n<<3)& 0xFF);// using mask to shift them all the way to the left
   bm= (bm>>(m<<3)& 0xFF);// same as above
   x= x & anti_mask;
   x|= (bm<< (n<<3));// same as below;
   x|= (bn << (m<<3));// shifting the bytes to their new posititon
   return x;
 }
 /* 
  * addOK - Determine if can compute x+y without overflow
  *   Example: addOK(0x80000000,0x80000000) = 0,
  *            addOK(0x80000000,0x70000000) = 1, 
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 20
  *   Rating: 3
  */
 int addOK(int x, int y) 
 {
     /* remmber that  if (+) added to  (+) = - then overflow and vice versa*/
     int signx, signy, summsign;
     signx= (x>>31);// extracting the signed bit 
     signy= (y>>31);// extracting the signed bit
     summsign= (x + y)>> 31;// extracting the signed bit of the summation
     return !(((summsign^ signy) & (signx ^ summsign))&1);
     // this checks to see if the sign of the summation is the same as the sign of x and y, if it is not then positive overflow has occured
     // how ever this method will returen -1 if there is overflow so you do &1 to make it a positive 1 and the use ! operator to return false
 }
 /* 
  * conditional - same as x ? y : z 
  *   Example: conditional(2,4,5) = 4
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 16
  *   Rating: 3
  */
 int conditional(int x, int y, int z) 
 {
     x = !!x; // this converts x to either 0(if x was !=0) or 1 (x=0)
     x= (x<<31)>>31; // this creates a mask that is either all 1's or all 0's
     return ((x&y)|(~x&z));
     /*
     The return statment will return whateve side comes to true. if the mask x is all 1 (indicating that the input was not 0) it will return as a mask
     of all 1s will let the number pass unaltered. on the other hand the mask of all 0's will make the number z.
     the same concept is used for the other side but because this side evaluates to true if x = 0 then you have to do the evaluation
     with ~x.
     */
 }
 /* 
  * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
  *   Example: isAsciiDigit(0x35) = 1.
  *            isAsciiDigit(0x3a) = 0.
  *            isAsciiDigit(0x05) = 0.
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 15
  *   Rating: 3
  */
 int isAsciiDigit(int x) 
 {
   return !(((x + (~0x30 +1))>>31) | (0x39 + (~x + 1))>>31 );
   /*the first part before the or sign is to check if x>0x30 if the value of the summation is + then it is
   then it is shifted 31 to the right to extract the signed bit.
   
   the second part takes the negative of x and adds it to 0x39, if it is positive then x<0x39
   we then or them together, will be 0 if the number is withnin range so we have to take ! that value
   */
   
 }
 /* 
  * replaceByte(x,n,c) - Replace byte n in x with c
  *   Bytes numbered from 0 (LSB) to 3 (MSB)
  *   Examples: replaceByte(0x12345678,1,0xab) = 0x1234ab78
  *   You can assume 0 <= n <= 3 and 0 <= c <= 255
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 10
  *   Rating: 3
  */
 int replaceByte(int x, int n, int c) 
 {
   int mask = 0xFF << (n<<3); // shift mask that would copy the data into position
   int anti_mask = ~mask;// creates the compliment of that mask to clear data in x
   x= x & anti_mask; // command clears spot with the anti mask.
   x |= c<< (n<<3); // this moves new data into position and then inserts it into x
 
   return x;
 }
 
 
 
 
 
 /* reverseBits - reverse the bits in a 32-bit integer,
               i.e. b0 swaps with b31, b1 with b30, etc
  *  Examples: reverseBits(0x11111111) = 0x88888888
  *            reverseBits(0xdeadbeef) = 0xf77db57b
  *            reverseBits(0x88888888) = 0x11111111
  *            reverseBits(0)  = 0
  *            reverseBits(-1) = -1
  *            reverseBits(0x9) = 0x90000000
  *  Legal ops: ! ~ & ^ | + << >> and unsigned int type
  *  Max ops: 90
  *  Rating: 4
  */
 int reverseBits(int c) 
 {
     int x, x2, x3, y;
     x= 0x55;//1010 1010
     x2= x<<8 |x;
     x3= x2<<16 |x2;
     // the above chains together a 32 bit mask of all 1's;
     c =((c>>1)&x3) | ((c & x3)<<1);
     // swaps all the even and odd bits;
     x= 0x33; //0011 0011
     x2= x<<8 |x;
     x3= x2<<16 |x2;
     c =((c>>2)&x3) | ((c & x3)<<2);
     // swaps all the even and odd GROUPS of 2 bits
     x= 0x0f; //0000 1111
     x2= x<<8 |x;
     x3= x2<<16 |x2;
     c =((c>>4)&x3) | ((c & x3)<<4);
     //swaps all even and odd bytes
     x= 0xff; //1111 1111
     x3= x<<16 |x;
     c =((c>>8)&x3) | ((c & x3)<<8);
     //swaps all even and odd GROUPS of 2 bytes
     x3= x<<8 |x;
     c =((c>>16)&x3) | ((c & x3)<<16);
     return c;
 }
 
 

 
 
 /*
  * satAdd - adds two numbers but when positive overflow occurs, returns
  *          maximum possible value, and when negative overflow occurs,
  *          it returns minimum positive value.
  *   Examples: satAdd(0x40000000,0x40000000) = 0x7fffffff
  *             satAdd(0x80000000,0xffffffff) = 0x80000000
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 30
  *   Rating: 4
  */
 int satAdd(int x, int y) 
 {
     int summ, omask, max, mask_sum;
     summ = x+y;
     omask = ((summ ^ x) & (summ ^ y))>>31;// all 1's if it overflows, all 0 if not for reasons in addok
     mask_sum = summ & ~omask;// this will be all zeros if it overflowed or the actual sum of x+y.
     max = omask & ((1<<31) + (summ>>31));// this makes the smallest negative number and then adds 0 or -1 
     return mask_sum | max;
     // if it overflows mask summ will be all 0's and max will the largest possible or smallest possible number
     // if not mask_sum will be x+y and max will be all 0's.
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*
  * Extra credit
  */
 /* 
  * float_abs - Return bit-level equivalent of absolute value of f for
  *   floating point argument f.
  *   Both the argument and result are passed as unsigned int's, but
  *   they are to be interpreted as the bit-level representations of
  *   single-precision floating point values.
  *   When argument is NaN, return argument..
  *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
  *   Max ops: 10
  *   Rating: 2
  */
 unsigned float_abs(unsigned uf) {
   return 2;
 }
 /* 
  * float_f2i - Return bit-level equivalent of expression (int) f
  *   for floating point argument f.
  *   Argument is passed as unsigned int, but
  *   it is to be interpreted as the bit-level representation of a
  *   single-precision floating point value.
  *   Anything out of range (including NaN and infinity) should return
  *   0x80000000u.
  *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
  *   Max ops: 30
  *   Rating: 4
  */
 int float_f2i(unsigned uf) {
   return 2;
 }
 /* 
  * float_half - Return bit-level equivalent of expression 0.5*f for
  *   floating point argument f.
  *   Both the argument and result are passed as unsigned int's, but
  *   they are to be interpreted as the bit-level representation of
  *   single-precision floating point values.
  *   When argument is NaN, return argument
  *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
  *   Max ops: 30
  *   Rating: 4
  */
 unsigned float_half(unsigned uf) {
   return 2;
 }
 
 