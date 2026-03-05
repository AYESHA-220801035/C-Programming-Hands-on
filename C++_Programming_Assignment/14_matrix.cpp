#include <iostream>
#include <initializer_list>
using namespace std;
class Matrix
{
private:
    int rows, cols;
    int **data;
public:
    Matrix(initializer_list<initializer_list<int>> values)
    {
        rows = values.size();
        cols = values.begin()->size();
        data = new int*[rows];
        int r = 0;
        for(auto row : values)
        {
            data[r] = new int[cols];
            int c = 0;
            for(auto val : row)
            {
                data[r][c++] = val;
            }
            r++;
        }
    }
    void display()
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Matrix()
    {
        for(int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
        cout << "Matrix memory freed!" << endl;
    }
};
int main()
{
    Matrix m1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "Matrix m1:\n";
    m1.display();
    Matrix m2 = {
        {10,20},
        {30,40}
    };
    cout << "\nMatrix m2:\n";
    m2.display();
    return 0;
}