#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,num,sum,i,j;
    cin>>t;
    while(t--)
    {
        sum=1;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>num;
            sum*=num;
        }
        if(2023%sum!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<(2023/sum)<<" ";
            for(j=1;j<=k-1;j++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        }

    }
}
