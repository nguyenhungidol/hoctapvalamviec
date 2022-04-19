#include <bits/stdc++.h>
using namespace std;
set<long long> fibo;
void init()
{
    long long f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i <= 92; i++)
    {
        fibo.insert(f[i]);
    }
}
int main()
{
    init();
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
        int ans = -1;      // ki luc so fibo trong 1 cot
        int cot;           // luu chi so cot co nhieu so fibo nhat
        long long sum = 0; // ki luc tong lon nhat neu co cung so fibo
        for (int i = 0; i < m; i++)
        {
            long long tmp = 0; // tong cac so fibo trong 1 cot
            int dem = 0;       // dem so fibo trong 1 cot
            for (int j = 0; j < n; j++)
            {
                if (fibo.count(a[j][i]) == 1)
                {
                    dem++;
                    tmp += a[j][i];
                }
            }
            if (dem > ans)
            {
                ans = dem;
                cot = i;
                sum = tmp;
            }
            else if (dem == ans)
            {
                if (sum < tmp)
                {
                    cot = i;
                    sum = tmp;
                }
            }
        }
        cout << cot + 1 << endl;
        for (int i = 0; i < n; i++)
        {
            if (fibo.count(a[i][cot]) == 1)
            {
                cout << a[i][cot] << " ";
            }
        }
        cout << endl;
    }
}
