#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main() {
    int user_input;
    string name = "bob";
    while (user_input != 0) {
        cout << "hello, " << name << endl;
        cout << "Number: ";
        cin >> user_input;
        if (user_input == 0) {
            cout << "また来てね！" << endl;
        } else if (user_input < 9000) {
            cout << "below 9000 weak" << endl;
        } else {
            cout << "more than 9000!!!!" << endl; 
        }
    }
    system("pause");
}