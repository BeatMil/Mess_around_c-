#include <iostream>
#include <array>
using namespace std;

int main () {
    string games[] = {"HOTD4","TEKKEN7","SFV","CP:BloodDrive"};
    // cout << games << endl;
    cout << sizeof(games) << endl;
    cout << sizeof(*games) << endl;
    int games_len = sizeof(games) / sizeof(*games); //c++ way of getting lenght of array
    cout << *games << endl;
    // cout << games.size() << endl;
    for (int i = 0; i < games_len; i++) {
        cout << games[i] << endl;
    }
    system("pause");
    return 0;
}