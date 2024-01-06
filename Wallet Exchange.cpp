#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==0 && b%2!=0 || b%2==0 && a%2!=0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }

}
