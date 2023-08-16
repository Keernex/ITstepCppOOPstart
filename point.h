#include "lib.h"


class Point
{
private:
    int x;
    int y;
    int z;
public:
    Point();
    Point(int x, int y, int z);
    ~Point();

    int getX();
    int getY();
    int getZ();

    void setX(int x);
    void setY(int y);
    void setZ(int z);

    void print_point();
    vector<Point> remove_point(vector<Point> point, int index);
};
