#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum_big, sum_sml, mark, flag;
    long long sum, avg, arr[200050];
    cin >> t;
    while (t--)
    {
        mark = 0, flag = 0, sum_big = 0, sum_sml = 0, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (flag == 0 && arr[i] < avg)
            {
                mark = 1;
                break;
            }
            else if (arr[i] > avg)
            {
                sum_big += (arr[i] - avg);
                flag = 1;
            }
            else if (flag == 1 && arr[i] < avg)
            {
                sum_sml = (avg - arr[i]);
                if (sum_sml > sum_big)
                {
                    mark = 1;
                    break;
                }
                else
                {
                    sum_big -= (sum_sml);
                    sum_sml = 0;
                }
            }
        }
        if (mark == 1)

            cout << "NO" << endl;

        else

            cout << "YES" << endl;
    }
}