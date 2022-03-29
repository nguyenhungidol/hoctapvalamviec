#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, X;
        cin >> n >> X;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        int res = 1e9;//lưu đồ dài ngắn nhất của dãy con
        //sử dụng kĩ thuật hai con trỏ
        int l = 0;
        for (int r = 0; r < n; i++)
        {
            sum += a[r];
            while (sum > x)
            {
                res = min(res, r - l + 1);
                sum -= a[l];
                l++;
            }
        }
        if (res == 1e9)
            cout << "-1\n";
        else
            cout << res << endl;
    }
}