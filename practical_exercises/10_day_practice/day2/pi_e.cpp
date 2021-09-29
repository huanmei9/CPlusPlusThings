#include <iostream>


using std::cout;
using std::endl;


double arctan(double x)
{
    double head = x;
    double art = 0;
    int tail = 1;
    
    while(double(head / tail) > 1e-15)
    {
        art = (tail % 4 == 1)? art+head/tail : art-head/tail;
        head *= x * x;
        tail += 2;
        cout<<"-------"<<endl;
        cout<<head<<"   "<<tail<<endl;
        cout<<"------"<<endl;
    }
    return art;
}


int main(void)
{
    double a = 16.0 * arctan(1.0 / 5.0);
    double b = 4.0 * arctan(1.0/239.0);
    double pi = a - b;

    cout<< pi <<endl;

    return 0;
}