#include <bits/stdc++.h>
// vevtor như 1 mảng động k quy định kích thước
// thêm phần tử tenvecto.push_back(); đẩy thêm ptu vào cuối
// size() kích thước của vecto
// truy cap cac phan tu trong vector qua chi so
// duyet thong qua index
// for each
// iterotor
using namespace std;
int main()
{
    vector<int> v;         // khai bao vector<kieudulieu> ten
    vector<int> v(n, 100); // khai bao vector da co n phan tu, co the khoi tao
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.push_back(10);
    v.push_back(20);
    cout << v.size() << endl;
    v.push_back(30);
    cout << v.size() << endl;
    cout << "Phan tu dau tien trong vecto" << v[0] << endl;
    cout << "Phan tu cuoi cung " << v[v.size() - 1] << endl;
    cout << "Phan tu cuoi cung " << v.back() << endl;
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}