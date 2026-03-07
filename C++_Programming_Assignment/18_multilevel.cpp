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
class Mobile : public Device
{
protected:
    int simSlots;
public:
    void setSIM(int s)
    {
        simSlots = s;
    }
};
class Smartphone : public Mobile
{
private:
    string operatingSystem;
public:
    void setOS(string os)
    {
        operatingSystem = os;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "SIM Slots: " << simSlots << endl;
        cout << "Operating System: " << operatingSystem << endl;
    }
};
int main()
{
    Smartphone phone;
    phone.setBrand("Samsung");
    phone.setSIM(2);
    phone.setOS("Android");
    cout << "Smartphone Details:\n";
    phone.display();
    return 0;
}