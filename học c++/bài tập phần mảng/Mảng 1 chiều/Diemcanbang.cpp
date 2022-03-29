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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int ok = 0;
        long long left = 0;
        for (int i = 0; i < n; i++)
        {
            sum -= a[i];
            if (sum == left)
            {
                cout << i << " ";
                ok = 1;
            }
            left += a[i];
        }
        cout << endl;
        if (!ok)
            cout << "-1" << endl;
    }
    return 0;
}
