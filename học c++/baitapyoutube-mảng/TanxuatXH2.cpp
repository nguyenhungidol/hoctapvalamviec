#include <bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0}; //khoi tao cac phan tu bang 0
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0; //dem so lan xuat hien lon nhat
    int res;     //luu ki luc cua so co lan xuat hien nhieu nhat
    for (int i = 0; i < n; i++)
    {
        int count = 1; //chinh la cac so dang can dem so lan XH
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (dem < count)
        {
            dem = count;
            res = a[i];
        }
    }
    cout << res << " " << dem;
    return 0;
}
// Cac kieu bai nay giong nhu tim 1 so max hoac min cua day so