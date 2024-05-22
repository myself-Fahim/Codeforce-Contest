#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, res1=0, res2=0,area=0;
        cin >> x >> y;
        if (x == 0 && y == 0)
            cout << "0" << endl;
        else if (x > 0 && y == 0)
            cout << ceil((double)x / 15) << endl;
        else if (x == 0 && y > 0)
            cout << ceil((double)y / 2) << endl;
        else
        {
            area=ceil((double)(x+(y*4))/15);
            res2 = ceil((double)y / 2);
            if (area > res2)
                cout << area << endl;
            else
                cout << res2 << endl;
        }
    }
}