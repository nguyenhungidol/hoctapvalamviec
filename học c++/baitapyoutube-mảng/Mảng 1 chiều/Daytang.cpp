#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) //the hien so luong bo test
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 1;   //bien luu ki luc
        int count = 0; //bien dem so day co do dai bang nhau
        int b[n];      //mang luu cac day trong day tang dai nhat
        int dem = 1;   //bien dung de đo độ dai cua cac day
        b[0] = 0;      //ban dau chua luu phan tu gi
        count = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                dem++; //neu cac phan tu lien ke tang dan thi dem
            }
            else
            {
                dem = 1; //neu khong tang reset bien dem
            }
            if (dem > res)
            {
                res = dem;          //cap nhat do dai lon nhat cua day sau moi lan chay
                b[0] = i - res + 1; //phan tu dau tien cua day dai nhat (i-res+1;i)
                count = 1;
            }
            else if (dem == res)
            {
                b[count] = i - res + 1; //bat dau luu tu chi so dau tien cua day co do dai nhat
                count++;
            }
        }
        cout << "Test : " << i << endl;
        cout << res << endl;
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < res; j++)
            {
                cout << a[b[i] + j] << " "; /*b[i] đang lưu chỉ số bắt đầu của dãy con co do dai lon nhat do,
                 thì cứ liệt kê dần các đỉnh từ chỉ số bat dau đó sao cho đủ độ dài dãy con lớn nhất tìm được.*/
            }
            cout << endl;
        }
    }
    return 0;
}