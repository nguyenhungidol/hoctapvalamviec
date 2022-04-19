#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m]; // mang chua cac phan tu cua day thu nhat va day thu hai
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    int i = 0;
    int j = 0;
    int cnt = 0;
    int c[n + m]; // mang sap xep tong cua hai day
    while (i < n && j < m)
    {
        // so sanh vi tri thu i cua day 1 va thu j cua day 2
        if (a[i] <= b[j])
        {
            c[cnt++] = a[i];
            ++i;
        }
        else
        {
            c[cnt++] = b[j];
            ++j;
        }
    }
    while (i < n) // truong hop neu day 1 dai hon day 2
    {
        c[cnt++] = a[i++];
    }
    while (j < m) // truong hop neu day 2 dai hon day 1
    {
        c[cnt++] = b[j++];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
}