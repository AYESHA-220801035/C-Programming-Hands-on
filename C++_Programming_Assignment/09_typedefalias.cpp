#include <iostream>
using namespace std;
typedef struct
{
    int id;
    string name;
    float marks;
} Student;  
int main()
{
    Student s1;
    cout << "Enter Student ID: ";
    cin >> s1.id;
    cout << "Enter Student Name: ";
    cin >> s1.name;
    cout << "Enter Marks: ";
    cin >> s1.marks;
    cout << "\n--- Student Details ---" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    return 0;
}