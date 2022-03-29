#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos[101] = {0};// mảng đánh dấu vị trí có thể sắp xếp lân cận
        for (int i = 0; i < m; i++)
        {
            //nhập các chỉ số của mảng m
            int x;
            cin >> x;
            // vị có thể sắp xếp lân cận điểm 
            pos[x - 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            //nếu chỉ số đó k xuất hiện thì thực hiện bước tiếp theo
            //nếu pos[i]=0 thì thực hiện lại với i = 0
            if (pos[i] == 0)
            {
                continue;
            }
            int index = i;// số đằng sau i
            while (index < n && pos[index])
            {
                ++index;
            }
            // [i, index]
            //sắp xếp hai số trong khoảng [i, i+1]
            sort(a + i, a + index + 1);
            i = index;
        }
        bool ok = true;
        // chỉ đến n - 1 vì sắp xếp có i + 1
        for (int i = 0; i < n - 1; i++)
        {
            //sắp xếp tăng dần
            if (a[i] > a[i + 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}