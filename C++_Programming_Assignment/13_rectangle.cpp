#include <iostream>
#include <stdexcept>
using namespace std;
class Rectangle
{
private:
    double width;
    double height;
public:
    void setWidth(double w)
    {
        if(w <= 0)
            throw invalid_argument("Width must be positive");
        width = w;
    }
    void setHeight(double h)
    {
        if(h <= 0)
            throw invalid_argument("Height must be positive");
        height = h;
    }
    double getArea()
    {
        return width * height;
    }
    void display()
    {
        cout << "Width = " << width << endl;
        cout << "Height = " << height << endl;
        cout << "Area = " << getArea() << endl;
    }
};
int main()
{
    Rectangle r;
    try
    {
        r.setWidth(10);
        r.setHeight(5);
        cout << "Valid Rectangle:\n";
        r.display();
        cout << "\nTrying invalid value...\n";
        r.setHeight(-4); 
    }
    catch(exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}