#include <bits/stdc++.h>

using namespace std;

// tim ucln bang de quy
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
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
        }
        // tim ucln cua day so
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = gcd(res, a[i]);
        }
        if (res == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 1; // dem cac uoc lon hon 1 cua ucln day so
        // tim cac uoc cua ucln trong day
        for (int i = 2; i <= sqrt(res); i++)
        {
            if (res % i == 0)
            {
                ++ans;
                // phong truong hop la so chinh phuong
                if (i != (res / i))
                    ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
