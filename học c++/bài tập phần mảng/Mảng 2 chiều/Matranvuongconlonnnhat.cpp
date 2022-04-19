#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        // bat dau tu o o duoi goc phai
        int dp[n][m];
        // giu lai cot dau tien
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = a[i][0];
        }
        // giu lai hang dau tien
        for (int i = 0; i < m; i++)
        {
            dp[0][i] = a[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[i][j])
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1; // ba o ben tren, cheo,trai
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                res = max(res, dp[i][j]);
            }
        }
        cout << res << endl;
    }
}