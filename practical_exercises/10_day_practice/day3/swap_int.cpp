#include <iostream>


using std::cout;
using std::endl;


void swap(int * a, int * b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int main(void)
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout<< a << " "<< b <<endl;
}