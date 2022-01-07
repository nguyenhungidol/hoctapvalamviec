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
        int cnt[30001] = {0};
        for (int i = 0; i < n; i++)
        {
            cnt[a[i]]++; //mảng đếm các lan xuat hien cac ptu trong mang
        }
        int res = 0; // luu ki luc số trong mảng
        for (int i = 0; i < n; i++)
        {
            if (res < cnt[a[i]])
            {
                res = cnt[a[i]];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (res == cnt[a[i]])
            {
                cout << a[i] << " ";
                cnt[a[i]] = 0;
            }
        }
        cout << endl;
    }
}