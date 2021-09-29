#include<iostream>


using std::cout;
using std::endl;


int i = 1;

void other(void);

int main(void)
{
    static int a;
    int b = -10;
    int c = 0;
    cout<<"---main---"<<endl;
    cout<<"i: "<<i<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    c = c + 8;
    other();

    cout<<"---main---"<<endl;
    cout<<"i: "<<i<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    i = i + 10;
    other();
    other();

    return 0;
}

void other(void)
{
    static int a = 2;
    static int b;
    int c = 10;


    a = a + 2;
    i = i + 32;
    c = c + 5;
    cout<<"---other---"<<endl;
    cout<<"i: "<<i<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    b = a;
}