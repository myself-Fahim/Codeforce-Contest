#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[10],y[10],result,j,index;
    cin>>n;
    while(n--)
    {
        for(int i=0;i<4;i++)
        {
            cin>>x[i]>>y[i];
        }
        for(int j=1;j<4;j++)
        {
            if(x[0]==x[j])
            {
                index=j;
            }
        }
        result=(y[index]-y[0])*(y[index]-y[0]);
        cout<<result<<endl;
    }
}
