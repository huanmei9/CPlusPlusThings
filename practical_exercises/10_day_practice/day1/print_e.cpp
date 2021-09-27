#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int i, j, k, f;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 30; j++)
            cout<< " ";
        for(k = 1; k <= 8-2*i; k++)
            cout<< " ";
        for(f = 1; f <= 2*i; f++)
            cout<< "*";
        cout<<endl;
    }// end for

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 30; j++)
            cout<< " ";
        for(f = 1; f <= 7-2*i; f++)
            cout<< "*";
        cout<<endl;
    }// end for
    
    return 0;
}