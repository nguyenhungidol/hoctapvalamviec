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
        cnt[a[i]]++;// dem so lan XH cua mot phan tu
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] != 0)
        { //neu so do xuat hien thi in ra
            cout << a[i] << " " << cnt[a[i]] << endl;
            cnt[a[i]] = 0;//sau khi dem xong 1 so thi in ra
        }
    }
    return 0;
}