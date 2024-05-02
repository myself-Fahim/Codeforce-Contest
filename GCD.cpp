#include <bits/stdc++.h>
using namespace std;
int gcd(int num1, int num2)
{
    int a, b, r;
    a = num1;
    b = num2;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        int max,ind;
        cin >> x;
        max = gcd(x,x-1);
        ind=x-1;
        for (int y = x-2; y >= 1; y--)
        {
            int gc=gcd(x,y);
            if ( gc > max)
            {
                max = gc;
                ind = y;
            }
        }
        cout << ind<< endl;
    }
}