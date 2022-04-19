#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int b[1000] = {0};
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (snt(a[i][j]))
                {
                    b[a[i][j]]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[a[i][j]] != 0)
                {
                    cout << a[i][j] << " ";
                }
                b[a[i][j]] = 0;
            }
        }
        cout << endl;
    }
}