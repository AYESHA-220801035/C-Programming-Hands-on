#include <iostream>
using namespace std;
class Teacher
{
public:
    string subject;
    void teach()
    {
        cout << "Teaching subject: " << subject << endl;
    }
    virtual void role()
    {
        cout << "Role: Teacher" << endl;
    }
};
class Researcher
{
public:
    string field;
    void research()
    {
        cout << "Research Field: " << field << endl;
    }
    virtual void role()
    {
        cout << "Role: Researcher" << endl;
    }
};
class Professor : public Teacher, public Researcher
{
public:
    void role()
    {
        cout << "Role: Professor (Teaching + Research)" << endl;
    }
    void display()
    {
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << field << endl;
    }
};
int main()
{
    Professor p;
    p.subject = "Computer Science";
    p.field = "Artificial Intelligence";
    p.display();
    p.teach();
    p.research();
    p.role();
    return 0;
}