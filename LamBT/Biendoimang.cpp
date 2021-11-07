#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == n - 1)
            {
                a[n - 1] = a[n - 1] + a[n - 2];
            }
            else
            {
                a[i] = abs(a[i + 1] - a[i - 1]) + a[i];
            }
        }
        cout << a[i] << " ";
    }

    return 0;
}