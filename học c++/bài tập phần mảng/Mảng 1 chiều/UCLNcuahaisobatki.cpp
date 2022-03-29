#include <bits/stdc++.h>

using namespace std;
map<int, int> mp;
void solve(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            mp[i]++;//chi so thu hai cua map luu so lan xuat hien
            if (i != (n / i))
            {
                mp[n / i]++;
            }
        }
    }
}

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
            solve(a[i]);
        }
        int res = 1;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                res = it.first;
            }
        }
        cout << res << " ";
        mp.clear();
    }
}

// //cach nay lau hon
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int res = 1;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 res = max(res, __gcd(a[i], a[j]));
//             }
//         }
//         cout << res << " ";
//     }
//     return 0;
// }