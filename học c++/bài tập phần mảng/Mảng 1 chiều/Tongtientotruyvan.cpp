#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    int prefix[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        //tinh tong tu dau den vi tri hien tai
        prefix[i] = prefix[i - 1] + a[i];
    }
    // so truy van can thuc hien
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}