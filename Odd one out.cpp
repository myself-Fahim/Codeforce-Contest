#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b && c!=b)
        {
            cout<<c<<endl;
        }
        else if(a==c && b!=c)
        {
            cout<<b<<endl;
        }
        else if(c==b && a!=b)
        {
            cout<<a<<endl;
        }
    }
}
