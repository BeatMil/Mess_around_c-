#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello World" << std::endl; //without using namespace std
    cout << "What is happening?"; // using namespace std
    cout << "Too close!!\n";// using namespace std
    cout << "I can also use `<< endln`" << endl;
    
    string name = "beat";
    int age = 15;
    int random_num = 5;
    cout << "here is my name: " + name << endl;
    cout << "my age: " << age << endl;
    cout << age + 5 << endl;
    cout << age - 2 << endl;
    cout << age/2 << endl;
    // cout << "here is my age: " + age << endl;
    



    system("pause");
    return 0;
}