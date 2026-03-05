#include <iostream>
using namespace std;
int main()
{
    string password;
    int length = 0;
    cout << "Enter password: ";
    cin >> password;
    for(int i = 0; password[i] != '\0'; i++)
    {
        length++;
    }
    if(length > 8)
    {
        cout << "Password is valid (length greater than 8)" << endl;
    }
    else
    {
        cout << "Password is too short" << endl;
    }
    return 0;
}