#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<long long, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int res;     // so co lan xuat hien nhieu nhat
        int cnt = 0; // dem so lan xuat hien
        for (auto it : mp)
        {
            if (it.second > cnt)
            {
                cnt = it.second;
                res = it.first;
            }
        }
        cout << res << " " << cnt << endl;
    }
    return 0;
}