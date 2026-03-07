#include <iostream>
#include <vector>
using namespace std;
void printDiag(int x)
{
    cout << "Integer value: " << x << endl;
}
void printDiag(double x)
{
    cout << "Double value: " << x << endl;
}
void printDiag(string s)
{
    cout << "String value: " << s << endl;
}
void printDiag(vector<int> v)
{
    cout << "Vector values: ";
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
template<typename T>
void printDiag(T x)
{
    cout << "Generic value: " << x << endl;
}
int main()
{
    int a = 10;
    double b = 3.14;
    string c = "Hello";
    vector<int> vec = {1,2,3,4};
    printDiag(a);
    printDiag(b);
    printDiag(c);
    printDiag(vec);
    return 0;
}