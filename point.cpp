#include "point.h"

Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}
Point::Point(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
Point::~Point()
{
    x = 0;
    y = 0;
    z = 0;
}
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
int Point::getZ()
{
    return z;
}
void Point::setX(int x)
{
    this->x = x;
}
void Point::setY(int y)
{
    this->y = y;
}
void Point::setZ(int z)
{
    this->z = z;
}
void Point::print_point()
{
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
vector<Point> Point::remove_point(vector<Point> point, int index)
{
    if (index >= 0 && index < point.size())
    {
        point.erase(point.begin() + index);
    }
    return point;
}











