#include <iostream>


using std::cout;
using std::cin;
using std::endl;


class A
{
    public:
        static void f(A a);
    private:
        int x = 1;
};
void A::f(A a)
{
    cout<<a.x<<endl;
}

class Application
{
    public:
        static void f();
        static void g();
    
    private:
        static int global;
};
int Application::global = 2;
void Application::f()
{
    global = 5;
}
void Application::g()
{
    cout<< global <<endl;
}


int main()
{
    Application::f();
    Application::g();

    A a;
    a.f(A());

    return 0;
}

