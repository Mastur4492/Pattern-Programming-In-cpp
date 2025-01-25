#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows in the pyramid

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
