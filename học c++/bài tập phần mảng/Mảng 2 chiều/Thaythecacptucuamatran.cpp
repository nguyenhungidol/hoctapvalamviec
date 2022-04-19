#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; // the hien su thay doi cua cac o xung quanh voi i
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1}; // the hien su thay doi cua cac o xung quanh voi j
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
        int res[500][500]; // mang luu cac ptu da thay the
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = a[i][j]; // o hien tai can thay the
                for (int k = 0; k < 8; k++)
                {
                    // thay doi cac chi so hang va cot
                    int imoi = i + dx[k]; 
                    int jmoi = j + dy[k];
                    if (imoi >= 0 && imoi < n && jmoi >= 0 && jmoi < m)
                    {
                        sum += a[imoi][jmoi];
                    }
                }
                res[i][j] = sum;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
