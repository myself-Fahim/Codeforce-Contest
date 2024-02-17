#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int mini,arr[150];
        long long sum=0;
        cin>>n;
        int lim=(2*n);
        for(int i=0;i<lim;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+lim);
        for(int j=0;j<lim;j+=2)
        {
            sum+=arr[j];
        }
        cout<<sum<<endl;
    }
}