#include <iostream>


using std::cout;
using std::endl;


enum weekday
{
    ONE = 2,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX
};


int main(void)
{

    for(int i = ONE; i <= SIX; i++)
    {
        cout<< i << endl;

    }

    return 0;
}