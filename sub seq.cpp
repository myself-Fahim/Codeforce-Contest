#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n >> m;
        string a, b;
        cin >> a;
        cin >> b;
        for (int i = 0, j = 0; i < m; i++)
        {
            if (a[j] == b[i])
            {
                count++;
                j++;
            }
        }
        cout<<count<<endl;
    }
}