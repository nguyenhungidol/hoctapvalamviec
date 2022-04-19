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
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j + 1]);
                }
                else if (j == m - 1)
                {
                    a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
                }
                else
                {
                    a[i][j] += max(a[i - 1][j - 1], max(a[i - 1][j], a[i - 1][j + 1]));
                }
            }
        }
        int res = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            res = max(res, a[n - 1][i]); // den hang cuoi la tim so lon nhat(vi da tinh tong cac so o tren roi)
        }
        cout << res << endl;
    }
    return 0;
}