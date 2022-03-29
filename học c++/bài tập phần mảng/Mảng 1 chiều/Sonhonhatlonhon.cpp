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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(a, a + n); // copy noi dung mang a cho vector v
        sort(v.begin(), v.end());//sắp xếp các phần tử trong vector
        for (int i = 0; i < n; i++)
        {
            //hàm upper_bound giúp tìm số nhỏ nhất lớn hơn so với số hiện tại trong khoảng nào đó
            auto it = upper_bound(v.begin(), v.end(), a[i]);
            if (it == v.end())//nếu không xét đến cuối mà không tìm thấy
            {
                cout << " _ ";
            }
            else
                cout << (*it) << " ";//con trỏ it đến giá trị trong vector
        }
        cout << endl;
    }
}
