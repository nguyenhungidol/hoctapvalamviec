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
        int ok = 1;//bien nay dung de kiem tra xem dieu kien co dung k
        for (int j = 0; j < i; j++)//kiem tra voi cac phan tu truoc
        {
            if (a[i] == a[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)//neu dieu kien dung
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}