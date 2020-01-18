#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    cout << "testing variant variables" << endl;
    int num = 6;
    double dnum = 6.69;
    char mychar = 'B';
    string mytext = "Hadoken";
    bool truth = true;
    cout << num << endl << dnum << endl << mychar << endl << mytext << endl << truth << endl;
    cout << num + dnum << endl;
    cout << "type: " << typeid(num).name() << endl;
    cout << "type: " << typeid(dnum).name() << endl;
    cout << "type: " << typeid(mychar).name() << endl;
    cout << "type: " << typeid(mytext).name() << endl;
    cout << "type: " << typeid(truth).name() << endl;


    system("pause");

}

