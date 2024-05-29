// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 1 ; i<=m ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            if(i!=1 && i!=m)
            {
                if(j==1 || j==n)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
  