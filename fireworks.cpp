#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, m;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        cout<<(m/a)+(m/b)+2<<endl;
    }
}