#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int cnt = 0; // dem so luong to tien
        for (int i = 0; i < 10; i++)
        {
            cnt += n / a[i];//dem phan nguyen 
            n %= a[i];// lay phan du de tiep tuc chia cho cac menh gia nho hon
        }
        cout << cnt;
    }
}