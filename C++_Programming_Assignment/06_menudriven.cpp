#include <iostream>
using namespace std;
int main()
{
    int choice, a, b;
    do
    {
        cout << "\nMENU";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Difference = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Product = " << a * b << endl;
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 4);
    return 0;
}