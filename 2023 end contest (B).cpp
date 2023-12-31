#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,temp,a,b,a2,b2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a2=a;
        b2=b;
        while(b!=0)
        {
            temp=a;
            a=b;
            b=temp%b;
        }
        long long int gcd=a;
        long long int lcm=(a2*b2)/(gcd);
        if(lcm==b2)
        {
            long long sum=((b2/a2)*lcm);
            cout<<sum<<endl;
        }
        else
        {
            cout<<lcm<<endl;
        }
    }

}
