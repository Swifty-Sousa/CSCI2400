#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int *ptr =&a;
    cout<< "mem adress of a "<< &a<< endl;
    cout<< "ptr without splat "<< ptr<< endl;
    cout<< "ptr with splat "<< *ptr<< endl;
}