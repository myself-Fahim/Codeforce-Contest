#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,count1,count2,count3,count4;
    char s1[100005],s2[100005];
    cin>>t;
    while(t--)
    {
        count1=0;
        count2=0;
        count3=0;
        count4=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        for(i=0,j=0;i<n;i++,j++)
        {
            if(s1[i]=='1')
            {
                count1++;
            }
            if(s2[j]=='1')
            {
                count2++;
            }
        }
        if(count1>count2)
        {
            for(i=0;i<n;i++)
            {
                if(s2[i]=='1' && s1[i]!='1')
                {
                    count3++;
                }
            }
            cout<<(count3+(count1-count2))<<endl;
        }
        else if(count1==count2)
        {
            for(i=0;i<n;i++)
            {
                if(s2[i]=='1' && s1[i]!='1')
                {
                    count3++;
                }
            }
            cout<<count3<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s2[i]=='0' && s1[i]!='0')
                {
                    count3++;
                }
            }
             cout<<(count3+(count2-count1))<<endl;
        }

    }
}
