#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, x, y;
    cin >> t;
    while (t--)
    {
        char arr[20][20];
        int flag = 0, index, sum1 = 0, sum2 = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '1' && flag == 0)
                {
                    index = i;
                    flag = 1;
                }
            }
        }
        for(i=index;i<=(index+1);i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==index)
                {
                    sum1+=(arr[i][j]-'0');
                }
                else
                {
                    sum2+=(arr[i][j]-'0');
                }
            }
        }
        // for (j = 0; j < n; j++)
        // {
        //     sum1 += (arr[index][j] - '0');
        // }

        // for (j = 0; j < n; j++)
        // {
        //     sum2 += (arr[index + 1][j] - '0');
        // }

        if (sum1 == sum2)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
}
