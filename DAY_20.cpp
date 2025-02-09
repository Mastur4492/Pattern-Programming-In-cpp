#include <iostream>
using namespace std;

int main()
{
    int start = 7;

    for (int i = 4; i >= 1; i--)
    {
        int num = start;

        for (int j = 0; j < i; j++)
        {
            cout << num;
            if (j < i - 1)
            {
                cout << "*";
            }
            num++;
        }

        cout << endl;
        start -= i - 1; 
    }

    return 0;
}