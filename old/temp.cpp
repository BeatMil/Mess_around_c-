#include <iostream>
using namespace std;

double get_degree() {
    cout << "temp F: ";
    double result;
    int f_temp;
    cin >> f_temp;
    // cout << endl;
    result = (f_temp - 32) * 5 / 9.0; //add decial to 9 to make it double
    return result;
}

// int main() {
//     cout << get_degree() << endl;

//     system("pause");
//     return 0;
// }
