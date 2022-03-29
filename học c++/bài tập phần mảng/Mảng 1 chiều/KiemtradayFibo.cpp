#include <bits/stdc++.h>
//số fibonaci là số bằng tổng của hai số đứng trc 
using namespace std;
int f[1001];//mảng đánh dấu các số xuất hiện 
void ktao()
{
    int fibo[20];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 19; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; fibo[i] <= 1000; i++)
    {
        f[fibo[i]] = 1;// thể hiện sự xuất hiện 
    }
}
int main()
{
    ktao();
    int t;
    cin >> t;
    while (t--)
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
            if (f[a[i]])
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}