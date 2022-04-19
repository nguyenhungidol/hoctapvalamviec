#include <bits/stdc++.h>

using namespace std;
int cnt[1000001];
int main()
{
    int a[10000];
    int n;
    cin >> n;
    int m = -1e9 - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;//dem so lan xuat hien cua cac phan tu trong mang
        m = max(m, a[i]);//so lon nhat cua mang
    }
    for (int i = 0; i < m; i++)
    {
        if (cnt[i] != 0)
        {
            // in ra so lan xuat hien (vi bang nhau)
            for (int j = 0; j < cnt[i]; j++)
            {
                cout << i << " ";
            }
        }
    }
}