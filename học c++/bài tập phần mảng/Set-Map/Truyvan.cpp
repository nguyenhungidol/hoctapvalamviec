#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // set
        int n;
        cin >> n;
        set<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            if (v.count(k) != 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        // map
        int n;
        cin >> n;
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp.[x] = true;
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            if (mp.count(k) == 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}