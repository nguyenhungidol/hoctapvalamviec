#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // long long res = -1e9;biến khởi tạo để so sánh giá trị của tổng dãy con liên tiếp
    // int index;//lưu chỉ số bắt đầu của dãy con liên tiếp
    // for (int i = 0; i <= n - k; i++)
    // {
    //     long long sum = 0;
    //     for (int j = 0; j < k; j++)vòng for này dùng để xét các phần tử trong dãy k liên tiếp
    //     {
    //         sum += a[i + j];
    //     }
    //     if (sum >= res)lấy dấu = để in ra dãy con cuối cùng có cũng tổng lớn nhất
    //     {
    //         res = sum;
    //         index = i;
    //     }
    // }
    // cout << res << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << a[i + index] << " ";
    // }
    long long res = 0, index = 0, sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    res = sum;
    for (int i = 1; i < n - k + 1; i++)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        if (sum >= res)
        {
            res = sum;
            index=i;
        }
    }
    cout << res << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i + index] << " " ;
    }
    return 0;
}