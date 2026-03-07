#include <iostream>
using namespace std;
class Seconds;
class MetersPerSecond;
class Meters
{
public:
    double value;
    Meters(double v)
    {
        value = v;
    }
    MetersPerSecond operator/(const Seconds& s);
};
class Seconds
{
public:
    double value;
    Seconds(double v)
    {
        value = v;
    }
};
class MetersPerSecond
{
public:
    double value;
    MetersPerSecond(double v)
    {
        value = v;
    }
    void display()
    {
        cout << "Speed: " << value << " m/s" << endl;
    }
};
MetersPerSecond Meters::operator/(const Seconds& s)
{
    return MetersPerSecond(value / s.value);
}
int main()
{
    Meters distance(100);
    Seconds time(20);
    MetersPerSecond speed = distance / time;
    speed.display();
    return 0;
}