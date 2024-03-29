#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        cout << "##";
                    else
                        cout << "..";
                }
                cout << endl;
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        cout << "##";
                    else
                        cout << "..";
                }
                cout << endl;
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        cout << "..";
                    else
                        cout << "##";
                }
                cout << endl;
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        cout << "..";
                    else
                        cout << "##";
                }
                cout << endl;
            }
        }
    }
}