#include <bits/stdc++.h>
using namespace std;
// sort(a,a+n) sap xep theo thu tu tang dan
// sort(a+x,a+y) sap xep trong khoang a[x;y-1]
// muon giam dan thi them greater< kieu du lieu>()
// neu la vector<kieu du lieu> a(n):  sort(a.begin(),a.end()); sort(a.begin()+x,a.begin()+y).
// stable_sort
// Neu la mảng kí tự thì sắp xếp theo thứ tự từ điển

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }
}