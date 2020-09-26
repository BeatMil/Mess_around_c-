#include <iostream>
using namespace std;

int main() {
    cout << "Gacha game!\n";
    cout << "the game is not done\n";

    int inventory[10];
    while (true) {
        int v1 = rand() % 10; 
        cout << v1+1 << endl;
        cin.ignore();
    }
    //for (int i = 0; i < 10; i++) {
        //cout << inventory[i] << endl;
    //}
    return 0;
}
