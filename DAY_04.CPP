#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = n; i >= 1; i--)
    {
        for (int s = i; s > 1; s--)
        {
        cout<<" ";
        }
        for (int j = 1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
      
}