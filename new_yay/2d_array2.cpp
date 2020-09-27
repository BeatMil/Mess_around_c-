#include "iostream"
#include <string>
using namespace std;

int main()
{
    // damn cpp is hard...
    // not yay > ... <

    string column_row_sizes = "3 5 6";
    int string_length = column_row_sizes.length();
    int number = stoi(column_row_sizes);
    int array[string_length] = {0};
    for (int i = 0; i < string_length; i++)
    {
        // 32 is a space!!
        // byte code !! this is coooll and weirddd
        // I give uppppp
        // this is a bit too harddd
        // T^T
        if (column_row_sizes[i] != 32)
        {
            cout << "this is not a space" << endl;
            array[i] = stoi(column_row_sizes[i]);
        }
    }
    cout << column_row_sizes[0]; 
    return 0;
}
