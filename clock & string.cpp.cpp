#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int f_c = 0, f_d = 0, a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((c == a || c == b) || (d == a || d == b))
            cout << "YES" << endl;
        else
        {
            for (int i = min(a, b); i <= max(a, b); i++)
            {
                if (i == c)
                    f_c = 1;
                else if (i == d)
                    f_d = 1;
            }
            if ((f_c == 1 && f_d == 0) || (f_c == 0 && f_d == 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}