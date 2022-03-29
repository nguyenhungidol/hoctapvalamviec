#include <bits/stdc++.h>

using namespace std;
// Khai báo mảng hai chiều (n dòng ,m cột) Kieu du lieu a[][];
// Có thể khai báo kích thước cố định của mảng hoặc a[n][m]
// Nhập, xuất mảng hai chiều bằng hai vòng for
// Khai báo mảng 2 chiều để nhập các dòng có độ dài khác nhau

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    // int a[100][100];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    // vector<int> a[n];
    // // so cot cua ma tran
    // for (int i = 0; i < n; i++)
    // {
    //     //so cot cua ma tran int m;
    //     cin >> m;
    //     for (int j = 0; j < m; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         a[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < a[i].size(); j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    // }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    // string a[n];
    // cin.ignore(); // xoa bo dem sau khi nhap n va m
    // for (int i = 0; i < n; i++)
    // {
    //     getline(cin, a[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << endl;
    // }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    // Chuyen dong thanh cot(ma tran chuyen hoa)
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            cout << a[j][i] << " ";
        }
    }
    return 0;
}