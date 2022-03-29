#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long res = 0, index = 0, sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    res = sum;
    for (int i = 1; i < n - k + 1; i++)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        if (sum >= res)
        {
            res = sum;
            index = i;
        }
    }
    cout << res << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i + index] << " ";
    }
    return 0;
}