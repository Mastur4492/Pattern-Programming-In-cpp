#include <iostream>
using namespace std;

int main()
{
    int num = 16;

    for (int i = 1; i <= 4; i++)
    {

        for (int j = 4; j >= 1; j--)
        {
            cout << num;
            if (j > 1)
            {
                cout << "*";
            }
            num--;
        }
        cout << endl;
    }

    return 0;
}
