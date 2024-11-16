
#include "Point.h"
using namespace std;

Point::Point()
{
    x = 0; y = 0;
}

Point::Point(double cX, double cY)
{
    x = cX;
    y = cY;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

void Point::setX(double _x)
{
    x = _x;
}

void Point::setY(double _y)
{
    y = _y;
}

void Point::set(double _x, double _y)
{
    setX(_x);
    setY(_y);
}

double Point::magnitud()
{
    return sqrt(x*x + y*y);
}

double Point::distance(Point other)
{
    //Point displacement(other.x - x, other.y - y);
    return Point(other.x - x, other.y - y).magnitud();
}

void Point::print()
{
    cout<<"("<<x<<", "<<y<<")"<<endl;
}
