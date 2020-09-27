#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[4] = {"beat","mate","dew","jero"};
    int name_size = sizeof(name)/sizeof(name[0]);
    cout << "normal order" << endl;
    for (int i = 0; i < name_size; i++)
    {
        cout << name[i] << endl;
    }
    cout << endl;
    cout << "reverse order" << endl;
    for (int i = name_size - 1; i >= 0; i--)
    {
        cout << name[i] << endl;
    }
    return 0;
}
