#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,arr[200000],sum2;
    long long sum;
    double sum3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        sum2=0;
        sum3=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
         sum2=sqrt(sum);
         sum3=sqrt(sum);
        if((sum3-sum2) == 0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}
