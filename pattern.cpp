// // No 1  pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<< j ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// No 2 pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<< "*" ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// No 3 pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout<< "*" ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// No 4 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout<<ch<<" ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }

// No 5 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3, num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// No 6 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";

//             ch++;
//         }
//         cout << endl;
//     }
// }

// No 7 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {
//             cout<<" * ";
//         }
//         cout << endl;
//     }
// }

// No 8 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i+1 ; j++)
//         {
//             cout<<i + 1;
//         }
//         cout << endl;
//     }
// }

// No 9 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch ='A';

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i+1 ; j++)
//         {
//          cout<<ch<<" ";
//         }
//         ch++;
//         cout << endl;
//     }
// }

// No 10 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// No 11 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j > 0 ; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// No 12 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     int num = 1;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 1; j <= i+1 ; j++)
//         {
//             cout << num << " ";
//             num ++;
//         }
//         cout << endl;
//     }
// }

// No 13 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 1; j <= i+1 ; j++)
//         {
//             cout << ch << " ";
//             ch ++;
//         }
//         cout << endl;
//     }
// }

// No 14 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i ; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout<< i + 1 ;
//         }

//         cout << endl;
//     }
// }

// No 15 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i ; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout<<ch;
//         }
//             ch ++ ;

//         cout << endl;
//     }
// }

// No 16 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j;
//         }
//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }

//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//            cout<<(i+1)<<" ";
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//             ch++;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n = 4;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 1;j <= i+1; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
//   }

// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n = 4;
//   int num = 1;

// for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j > 0; j--)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
// }

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 4;

//   for (int i = 0; i < n; i++)
//   {
//     char ch = 'A' + i;//65
//     for (int j = 0; j < i + 1; j++)
//     {
//       cout << ch << " ";
//       ch--;
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 4;

//   for (int i = 1; i <= n; i++)
//   {

//     for (int s = 1; s <= i; s++)
//     {
//       cout<<" ";
//     }
    
  
//     for (int j = 1; j <= n; j++)
//     {
//       cout <<"* ";
//     }
//     cout << endl;
//   }
// }

#include<iostream>
using namespace std;

    int main(){
    int n = 4;
   char ch = 'A';
 
    for(int i=0; i<n; i++){ //outer loop
    
        for(int j=0; j<i; j++){ //first inner loop for spaces
            cout<<" ";
        }
        
        for(int j=0; j<n-i; j++){ // loop for num
            cout<<char('A'+i);
        }
        cout<<endl;
    }

    return 0;
    }