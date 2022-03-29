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
    int res = 1; // ki luc dai nhat cua day con co cac phan tu bang nhau
    int dem = 1; // dem do dai cua day con co cac phan tu bang nhau
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            dem++;
        }
        else
        {
            dem = 1;
        }
        res = max(res, dem);
    }
    cout << n - res << endl;
    return 0;
}