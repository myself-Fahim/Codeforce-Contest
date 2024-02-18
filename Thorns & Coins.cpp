#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='@')
            {
                count++;
            }
            else if(s[i]=='*' && s[i+1]=='*')
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}