#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        // tinh tong cac hang,cot thu i,j
        int hang[n] = {0}, cot[n] = {0};
        FOR(i, 0, n)
        {
            FOR(j, 0, n)
            {
                cin >> a[i][j];
                hang[i] += a[i][j];
                cot[j] += a[i][j];
            }
        }
        // tim tong hang hoac tong co gia tri lon nhat
        int final = max(*max_element(hang, hang + n), *max_element(cot, cot + n));
        //bien can tim
        int ans = 0;
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            int r = min(final - hang[i], final - cot[j]);
            a[i][j] += r;
            hang[i] += r;
            cot[j] += r;
            ans += r;
            if (hang[i] == final)
                ++i;
            if (cot[j] == final)
                ++j;
        }
        cout << ans << endl;
    }
    return 0;
}