#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[100];
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        cout<<sum<<endl;
    }
}