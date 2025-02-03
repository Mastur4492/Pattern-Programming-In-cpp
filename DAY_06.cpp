//Pyramid Star Pattern

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s < n-i+1; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}