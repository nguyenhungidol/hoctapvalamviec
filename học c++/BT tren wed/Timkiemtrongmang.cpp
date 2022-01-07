#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            cout << i + 1 << ' ';//vị tri trong mang thu 11 va vi tri bang nhau trong 10 so truoc
            count++;
        }
    }
    if (count == 0)
    {
        cout << -1;
    }
    return 0;
}