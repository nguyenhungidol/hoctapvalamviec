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
        int maxval = -1e9 - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                maxval = max(maxval, a[i][j]);
            }
        }
        cout << maxval << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (maxval == a[i][j])
                {
                    cout << "Vi tri xuat hien : A[" << i + 1 << "][" << j + 1 << "]" << endl;
                }
            }
        }
        cout << endl;
    }
}