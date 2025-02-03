#include <iostream>
using namespace std;

int main()
{
  int n = 4;

  for (int i = 1; i <= n; i++)
  {

    for (int s = 1; s <= i; s++)
    {
      cout<<" ";
    }
    
  
    for (int j = 1; j <= n; j++)
    {
      cout <<"* ";
    }
    cout << endl;
  }
}
