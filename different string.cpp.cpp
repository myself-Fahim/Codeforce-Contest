#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0, index1, index2;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 1; j < s.length(); j++)
            {
                if (s[i] != s[j])
                {
                    flag=1;
                    char temp;
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    cout<<"YES"<<endl;
                    cout<<s<<endl;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
  
    }
}