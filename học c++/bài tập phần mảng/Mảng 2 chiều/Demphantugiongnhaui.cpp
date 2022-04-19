#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[105][105];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        int cnt = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[0][i]] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // i o day la so lan xuat hien cua phan tu xet o hang 1 (hay la second)
                if (mp[a[i][j]] == i)
                {
                    mp[a[i][j]]++;
                }
            }
        }
        for (auto it : mp)
        {
            if (it.second == n)
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}