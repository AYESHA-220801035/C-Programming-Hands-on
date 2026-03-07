#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    double salary;
public:
    void setEmployee(string n, double s)
    {
        name = n;
        salary = s;
    }
};
class Manager : public Employee
{
private:
    string department;
public:
    void setManager(string d)
    {
        department = d;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};
int main()
{
    Manager m;
    m.setEmployee("Ravi", 75000);
    m.setManager("IT");
    cout << "Manager Details:\n";
    m.display();
    return 0;
}