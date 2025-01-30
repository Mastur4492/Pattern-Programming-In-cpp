#include <iostream>
using namespace std;

int main() {
    int num = 4; 

    // Upper half of the diamond
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = num - 1; i >= 1; i--) {
        for (int j = 0; j < num - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
