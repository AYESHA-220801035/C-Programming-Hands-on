#include <iostream>
using namespace std;
int factorialRecursive(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

int factorialIterative(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial using Iteration = " << factorialIterative(num) << endl;
    cout << "Factorial using Recursion = " << factorialRecursive(num) << endl;
    return 0;
}