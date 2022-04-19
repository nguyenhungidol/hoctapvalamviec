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
        vector<int> row; // luu cac hang co tong lon nhat
        long long res = -1e18;
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += a[i][j];
            }
            if (sum > res)
            {
                res = sum;
                row.clear();      // xoa het cac hang trong row
                row.push_back(i); // them hang thu i vao
            }
            else if (sum == res)
            {
                row.push_back(i);
            }
        }
        cout << res << endl;
        for (int x : row)
        {
            cout << x + 1 << " ";
        }
    }
}
