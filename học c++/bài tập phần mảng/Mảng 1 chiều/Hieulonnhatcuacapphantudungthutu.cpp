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
        int mins = a[0], res = -1e9;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >> mins)//số đang xét hiện tại lớn hơn số trc nó
            {
                res = max(res, a[i] - mins);//tìm hiệu lớn nhất
            }
            mins = min(a[i], mins);//tìm số nhỏ nhất đứng trc
        }
        if (res == -1e9)//nếu dãy giảm
            cout << "-1" << endl;
        else
            cout << res << endl;
    }
    return 0;
}