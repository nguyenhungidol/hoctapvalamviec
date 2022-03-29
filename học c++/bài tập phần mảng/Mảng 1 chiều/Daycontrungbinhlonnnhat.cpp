#include <bits/stdc++.h>

using namespace std;
// sử dụng kĩ thuật sliding window
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        int res = sum, idx = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        for (int i = k; i < n; i++)//độ dài của cửa sổ
        {
            sum = sum - a[i - k] + a[i];//trừ đi phần tử đứng trước cửa sổ và cộng thêm phần tử tiếp theo
            if (sum > res)
            {
                res = sum;//cập nhật tổng lớn nhất mới
                idx = i - k + 1;//lưu vị trí bắt đầu của dãy có tổng lớn nhất
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << a[idx + i] << " ";
        }
    }
    cout << endl;
}