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
        set<int> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        int ok = 0;
        for (int x : a)
        {
            if (v.count(x) == 0)
            {
                cout << x << " ";
                ok = 1;
            }
        }
        if (!ok)
        {
            cout << "NOT FOUND";
        }
        else
        {
            cout << endl;
        }
    }
}