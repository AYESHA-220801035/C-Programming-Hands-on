#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate elements are: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}