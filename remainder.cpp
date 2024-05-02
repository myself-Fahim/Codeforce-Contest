#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        int x[200050],a[200050];
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            cin>>x[i];
        }
        a[0]=501;
        for(int i=0,j=1;i<n-1;i++)
        {
            a[j]=a[j-1]+x[i];
            j++;
        }
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;

    }
}