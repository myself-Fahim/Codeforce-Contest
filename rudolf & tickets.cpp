#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,k,arr[200],brr[200];
    cin >> t;
    while (t--){
        cin>>a>>b>>k;
        int count=0;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<b;j++)
        {
            cin>>brr[j];
        }
        if(a>b){
            for(int i=0;i<b;i++)
             for(int j=0;j<a;j++)
                 if((brr[i]+arr[j])<=k)
                    count++;
        }
        else{
            for(int i=0;i<a;i++)
             for(int j=0;j<b;j++)
                 if((arr[i]+brr[j])<=k)
                    count++;
        }
        cout<<count<<endl;

    }
}