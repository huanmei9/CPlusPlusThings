#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Return n!
int f(int n)
{
    if(n == 0)
        return 1;
    else
        return n * f(n-1);
}

int main(void)
{
    cout<<"input x: ";
    int x;
    cin>>x;
    cout<<f(x)<<endl;

    return 0;
}