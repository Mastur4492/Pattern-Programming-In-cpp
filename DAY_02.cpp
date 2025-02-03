#include<iostream>
using namespace std;

int main(){
    int i,j;
    int k = 6;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i == 1 || i == k || j == 1 ||j == k)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    
}