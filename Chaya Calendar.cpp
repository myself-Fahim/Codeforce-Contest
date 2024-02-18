#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int arr[150];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int year=arr[0];
        for(int j=1;j<n;j++)
        {
          k=1;
          while(1)
          {
            if(arr[j]*k>year)
            {
                year=(arr[j])*k;
                break;
            }
            else
            {
                k++;
            }
          }
        }
        cout<<year<<endl;
        
    }
}