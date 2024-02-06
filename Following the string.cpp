#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr[200060], i, n , j;
    cin >> t;
    while (t--)
    {
        int sarr[26] = {0};
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (j = 1; j <= 26; j++)
            {
                if (arr[i] == sarr[j])
                {
                    char letter = 96 + j;
                    sarr[j]++;
                    cout << letter;
                    break;
                }
            }
        }
        cout << endl;
    }
}
