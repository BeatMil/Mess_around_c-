#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[4] = {"beat","mate","dew","Jero"};
    int name_size = sizeof(name)/sizeof(name[0]);
    for (int i = 0; i < name_size; i++)
    {
        cout << name[i] << endl;
    }
    return 0;
}
