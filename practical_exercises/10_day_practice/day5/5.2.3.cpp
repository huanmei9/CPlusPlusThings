#include <iostream>


using std::cout;
using std::endl;


class A
{
    public:
        A(){ cout<<"Constructing A"<<endl; }
        ~A(){ cout<<"Destructing A"<<endl; }
};


class B:public A
{
    public:
        ~B(){ cout<<"Destructing B"<<endl; }
};


int main(void)
{
    B b;

    return 0;
}