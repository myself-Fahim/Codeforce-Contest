#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,index;
    cin>>t;
    while(t--)
    {
        int count1=0;
        int flag=0;
        string s;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                index=i;
            }
        }
        for(int j=0;j<=index;j++)
        {
            if(s[j]=='B')
            {
                flag=1;
                count1++;
            }
            else if(flag==1)
            {
                count1++;
            }
            else
            {
                continue;
            }
            
        }
        cout<<count1<<endl;
       
    }
}