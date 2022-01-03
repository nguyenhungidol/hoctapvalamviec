#include <bits/stdc++.h>
using namespace std;
void sapxep(int a[], int n)//ham sap xep cac day so chan va le
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int chan[n], le[n];//mang chua cac phan tu chan va le
    int c = 0;//bien dem mo rong de luu cac phan tu chan
    int l = 0;//bien dem mo rong de luu cac phan tu le
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            chan[c++] = x;
        }
        else
        {
            le[l++] = x;
        }
    }
    sapxep(chan, c);
    sapxep(le, l);
    for (int i = 0; i < c; i++)
    {
        cout << chan[i] << " ";
    }
    for (int i = 0; i < l; i++)
    {
        cout << le[i] << " ";
    }
    return 0;
}
