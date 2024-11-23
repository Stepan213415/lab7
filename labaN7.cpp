#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int array[3][3] = 
    {
        {9, 4, 7},
        {3, 8, 1},
        {5, 2, 6}
    };
    cout << "Array to be sorted:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; ++i) 
    {
        sort(array[i], array[i] + 3);
    }
    cout << "Array after sorting:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
