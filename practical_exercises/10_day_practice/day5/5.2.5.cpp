#include <iostream>


using std::cout;
using std::endl;


class A
{
    public:
        A() { cout<<"Constructing A"<<endl; }
        ~A() { cout<<"Destructing A"<<endl; }
};


class B
{
    public:
        B() { cout<<"Constructing B"<<endl; }
        ~B() { cout<<"Destructing B"<<endl; }
};


class C
{
    public:
        C() { cout<<"Constructing C"<<endl; }
        ~C() { cout<<"Destructing C"<<endl; }
};


class D:public C
{
    public:
        D() { cout<<"Constructing D"<<endl; }
        ~D() { cout<<"Destructing D"<<endl; }
    private:
        B b;
        A a;
        C c;
};


int main(void)
{
    D d;

    return 0;
}