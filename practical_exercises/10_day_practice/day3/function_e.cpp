#include <iostream>


using std::cout;
using std::cin;
using std::endl;


const float PI = 3.14159;
const float FencePrice = 35;
const float ConcretePrice = 20;


class Circle
{
    private:
        float radius;

    public:
        Circle(float r);
        float Circumference() const;
        float Area() const;
};
Circle::Circle(float r)
{
    radius = r;
}

float Circle::Circumference() const
{
    return 2 * PI * radius;
}

float Circle::Area() const
{
    return PI * radius * radius;
}


int main(void)
{
    float radius;
    float FenceCost, ConcreteCost;

    cout<< "Enter the radius of the pool: ";
    cin>>radius;

    Circle pool(radius);
    Circle pool_rim(radius + 3);
    FenceCost = pool_rim.Circumference() * FencePrice;
    cout<< "Fencing Cost is: " << FenceCost << endl;

    ConcreteCost = (pool_rim.Area() - pool.Area()) * ConcretePrice;
    cout << "Concrete Cost is: " << ConcreteCost <<endl;

    return 0;
}