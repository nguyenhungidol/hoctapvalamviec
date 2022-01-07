#include <bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0}; //khai bao mang(nen o ngoai de tranh tran bo nho)
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
        cnt[a[i]]++; //dem so lan xuat hien cua cac phan tu trong mang
    }
    int dem = 0; //dem so lan xuat hien
    int res;     //luu ki luc cua so xuat hien nhieu nhat
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] > dem) //cap nhat ki luc
        {
            dem = cnt[a[i]];
            res = a[i];
        }
        else if (cnt[a[i]] == dem) //neu co nhieu so cung tan so xuat hien
        {
            if (res > a[i])
            {
                res = a[i]; //lay so nho hon neu co cung tan so 
            }
        }
    }
    cout << res <<" "<< dem;
    return 0;
}