#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,x,n,maxi1,maxi2,count,j,count2,index,flag;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        maxi1=0;
        maxi2=1000000000;
        count=0;
        count2=0;
        flag=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>x;
            if(a==1)
            {
                maxi1=max(maxi1,x);
            }
            else if (a==2)
            {
                maxi2=min(maxi2,x);
            }
            else
            {
                v.push_back(x);
            }
        }
        if(maxi1>maxi2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(j=0;j<v.size();j++)
            {
                if(v[j]>=maxi1 && v[j]<=maxi2)
                {
                    count2++;
                }
            }
            int total_numbers=((maxi2-maxi1)+1)-count2;
            cout<<total_numbers<<endl;
        }

    }
}
