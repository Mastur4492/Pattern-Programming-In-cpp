#include <iostream>
using namespace std;

int main() {
    int num = 4; 

    // Upper part of the pattern
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num - i ; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = 1; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
