#include <iostream>
using namespace std;
class Device
{
protected:
    string brand;
public:
    void setBrand(string b)
    {
        brand = b;
    }
};
class Phone : virtual public Device
{
public:
    void call()
    {
        cout << "Making a phone call..." << endl;
    }
};
class Camera : virtual public Device
{
public:
    void takePhoto()
    {
        cout << "Taking a photo..." << endl;
    }
};
class SmartPhone : public Phone, public Camera
{
public:
    void display()
    {
        cout << "Brand: " << brand << endl;
    }
};
int main()
{
    SmartPhone sp;
    sp.setBrand("Apple");
    sp.display();
    sp.call();
    sp.takePhoto();
    return 0;
}