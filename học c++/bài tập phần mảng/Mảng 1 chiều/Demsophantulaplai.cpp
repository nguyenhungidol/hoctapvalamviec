#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); i--)
using namespace std;

int b[100001] = {0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
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
            b[a[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] >= 2)
                cnt++;
        }
        cout << cnt << endl;
    }
}