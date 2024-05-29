// Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = 0; j<= n-i-1; j++)
        {
            cout<<" ";
        }
        for(int k = 1 ; k<= n ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}