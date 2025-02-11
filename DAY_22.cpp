#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int rows = 4;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num--;
            if (j < i - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
