// Print the following pattern
// Input: n = 4
// Output:
//     *
//    **
//   ***
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = n-i ; j>=1 ; j--)
        {
            cout<<(" ");
        }

        for(int k = 1 ; k<=i ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int l = 1 ; l<=n-1 ; l++)
    {
        for(int n = 1 ; n<=l ; n++)
        {
            cout<<(" ");
        }

        for(int m = n-l ; m>=1 ; m--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}