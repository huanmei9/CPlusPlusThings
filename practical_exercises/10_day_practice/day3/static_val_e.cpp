#include <iostream>


using std::cout;
using std::endl;


class Point
{
    public:
        Point(int xx = 0, int yy = 0) {X = xx; Y = yy; countP++;}
        Point(Point &p);
        int GetX() {return X;}
        int GetY() {return Y;}
        void GetC() {cout<<"Object id = "<<countP<<endl;}
    private:
        int X, Y;
        static int countP;
};
Point::Point(Point &p)
{
    X = p.X;
    Y = p.Y;
    countP ++;
}
int Point::countP = 0;


int main(void)
{
    Point aPoint(4, 5);
    cout<< "Point A, "<<aPoint.GetX()<<", "<<aPoint.GetY();
    aPoint.GetC();
    Point bPoint(aPoint);
    cout<< "Point B, "<<aPoint.GetX()<<", "<<aPoint.GetY();
    bPoint.GetC();

    return 0;
}