#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2;
        cin >> s;
        s2 += s[0];
        s2 += s[1];
        int t = stoi(s2);
        if (t == 0)
            cout << "12:" << s[3] << s[4] << " AM" << endl;
        else if (t < 12)
            cout << s << " AM" << endl;
        else if (t == 12)
            cout << s << " PM" << endl;
        else
        {
            int time = t - 12;
            if (time < 10)
                cout << "0" << (t - 12) << ":" << s[3] << s[4] << " PM" << endl;
            else
                cout << (t - 12) << ":" << s[3] << s[4] << " PM" << endl;
        }
    }
}