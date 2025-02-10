#include <iostream>
using namespace std;

int main() {
    int start = 1; 

    for (int i = 1; i <= 4; i++) { 
        int num = start; 

        for (int j = 1; j <= i; j++) { 
            cout << num;
            if (j < i) {
                cout << "*";
            }
            num--; 
        }

        start += (i + 1); 
        cout << endl; 
    }

    return 0;
}
