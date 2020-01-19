#include <iostream>
#include <typeinfo>
#include <string>
#include "temp.cpp"
using namespace std;

int main() {
    int user_input;
    string name = "bob";
    while (user_input != 0) {
        cout << "hello, " << name << endl;
        cout << "Number: ";
        cin >> user_input;
        if (user_input == 0) {
            cout << "JAPANESE NOT WORK\nまた来てね！" << endl;
        } else if (user_input < 9000) {
            cout << "below 9000 weak" << endl;
        } else {
            cout << "more than 9000!!!!" << endl; 
        }
    }
    cout << "try this temp" << endl;
    cout << get_degree() << endl;
    system("pause");
    return 0;
}