#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    double x, y;

    Point(double xVal = 0, double yVal = 0)
    {
        x = xVal;
        y = yVal;
    }
};
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
double distance(Point p1, Point p2)
{
    return sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
}
double distance(Point p)
{
    return sqrt(p.x*p.x + p.y*p.y);
}
int main()
{
    Point p1(2,3);
    Point p2(6,7);
    cout << "Distance using coordinates: "
         << distance(2,3,6,7) << endl;
    cout << "Distance between points: "
         << distance(p1,p2) << endl;
    cout << "Distance from origin: "
         << distance(p1) << endl;
    return 0;
}