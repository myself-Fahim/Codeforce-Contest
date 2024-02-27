#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, arr[100050];
    cin >> t;
    while (t--)
    {
        long long sum = 0, flag = 0, count = 0, sum2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 3 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            sum2 = sum;
            for (int i = 0; i < n; i++)
            {
                if ((sum - arr[i]) % 3 == 0)
                {
                    flag = 1;
                    cout << "1" << endl;
                    break;
                }
                else if (sum2 % 3 != 0)
                {
                    count++;
                    sum2++;
                }
            }
            if (flag == 0)
            {
                cout << count << endl;
            }
        }
    }
}