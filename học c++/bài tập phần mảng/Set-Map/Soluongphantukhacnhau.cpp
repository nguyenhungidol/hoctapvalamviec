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
        // cach lam theo set
        // set<int> v;
        // for (int i = 0; i < n; i++)
        // {
        //     int x;
        //     cin >> x;
        //     v.insert(x); // vi set chi them cac phan tu chua xuat hien
        // }
        // cout << v.size() << endl;

        // lam theo cach map
        // map<int, bool> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     int x;
        //     cin >> x;
        //     mp[x] = true; // danh dau nhung so da xuat hien
        // }
        // cout << mp.size() << endl;

        // cach 3
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        sort(a, a + n);
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}