#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,count1,count2;
    char S[5005];
    cin>>t;
    while(t--)
    {
        count1=0;
        count2=0;
        scanf("%d ",&n);
        gets(S);
        for(i=0;i<n;i++)
        {
            if(S[i]=='+')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
         int sum=abs(count1-count2);
         cout<<sum<<endl;
    }
}
