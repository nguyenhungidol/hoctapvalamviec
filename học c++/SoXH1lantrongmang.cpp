#include <bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0};
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
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] == 1)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}