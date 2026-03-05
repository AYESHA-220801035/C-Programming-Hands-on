#include <iostream>
using namespace std;
int main()
{
    int capacity = 2;  
    int size = 0;       
    int *arr = new int[capacity];
    int n, value;
    cout << " numbers to be inserted ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> value;
        if(size == capacity)
        {
            capacity = capacity * 2;
            int *newArr = new int[capacity];
            for(int j = 0; j < size; j++)
            {
                newArr[j] = arr[j];
            }
            delete[] arr;
            arr = newArr;
            cout << "Array size doubled to " << capacity << endl;
        }
        arr[size] = value;
        size++;
    }
    cout << "\nElements in array:\n";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}