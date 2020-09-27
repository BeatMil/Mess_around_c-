#include "iostream"
using namespace std;

int main()
{
    // declare row and column this way
    // it's easier to manage the whole 2d array
    // yay > ... <
    int row = 2;
    int column = 3;

    int arr[row][column] = {{2,1,3},{0,6,9}};
    for(int i = 0; i<column; i++)
    {
        for(int j = 0; j<row; j++)
        {
            cout << arr[j][i];
        }
        cout << endl;
    }
    return 0;
}
