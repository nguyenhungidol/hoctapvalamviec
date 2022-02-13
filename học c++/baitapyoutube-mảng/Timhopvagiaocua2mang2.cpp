#include <bits/stdc++.h>
using namespace std;

int cnt[1000001] = {0};
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int max_Val = -1e9;
    int min_Val = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;//dem so lan xuat hien cac phan tu trong day 1
        min_Val = min(min_Val, a[i]);
        max_Val = max(max_Val, a[i]);
        //tim so lon nhat nho nhat trong day
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        cnt[b[i]]++;//dem so lan xuat hien cac phan tu trong day 2
        min_Val = min(min_Val, b[i]);
        max_Val = max(max_Val, b[i]);
        //tim so lon nhat nho nhat trong day
    }
    for (int i = min_Val; i <= max_Val; i++)//chay tu so nho nhat den so lon nhat trong ca 2 day(sap xep luon day)
    {
        if (cnt[i])//chi can xuat hien thi duoc liet ke vao mang hop
            cout << i << " ";
    }
    cout << endl;
    for (int i = min_Val; i <= max_Val; i++)
    {
        if (cnt[i] == 2)//neu xuat hien 2 lan duoc liet ke vao mang giao
            cout << i << " ";
    }
    return 0;
}