#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    int res = 0;
    int count = 0;
    int dem = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                count++;
            }
            else
            {
                dem = 1;
            }
            if (dem > res)
            {
                res = dem;
                b[0] = i - res + 1;
                count = 1;
            }
            else if (dem == res)
            {
                b[count] = i - res + 1;
                count++;
            }
        }
        cout << "Test: " << i << endl;
        cout << res;
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < res; j++)
            {
                cout << a[b[i] + j];
            }
            cout << endl;
        }
    }
    return 0;
}