#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); i--)

const ll MOD = (long long)1e9 + 7;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        FOR(i, 0, n)
        cin >> a[i];
        ll lt = 1;
        ll sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += a[i] * lt;
            sum %= MOD;
            lt *= x;
            lt %= MOD;
        }
        cout << sum << endl;
    }
    return 0;
}