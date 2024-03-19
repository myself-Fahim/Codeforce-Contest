#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        long long a,b,c,n_tent=0;
        cin>>a>>b>>c;
        long long cal=(b-(3*(b/3)))+c;
        if(a==0 && b==0 && c==0)
        cout<<"0"<<endl;
        else if(b%3!=0 && cal<3)
        {
            cout<<"-1"<<endl;
        }
        else{
            if((b+c)%3==0){
            n_tent=a+((b+c)/3);
            cout<<n_tent<<endl;
            }
            else{
            n_tent=a+((b+c)/3)+1;
            cout<<n_tent<<endl;}
        }
    }
}