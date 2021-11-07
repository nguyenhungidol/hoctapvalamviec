#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[0] = a[0];
        }
        else
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r; //chi so chi vi tri (no bat dau tu 1 khac voi vong lap bd tu 0)
        l--;
        r--;
        if (l == 0)
        {
            cout << prefix[r] << endl;
        }
        else
        {
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }
    return 0;
}