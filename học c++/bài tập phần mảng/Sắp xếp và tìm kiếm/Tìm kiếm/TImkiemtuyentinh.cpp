#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// binary search 0(logn)
// cac phan tu phai duoc sap xep tang hoac giam dan
bool bs(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return true;
        }
        // neu so o giua nho hon so can tim, tiep tuc tim ben phai
        else if (a[m] < x)
        {
            l = m + 1;
        }
        // neu so o giua lon hon so can tim, tiep tuc tim ben trai
        else if (a[m] > x)
        {
            r = m - 1;
        }
    }
    return false;
}
// binary search bang de quy
bool binary_search(int a[], int l, int r, int x)
{
    if (l > r)
        return false;
    int m = (l + r) / 2;
    if (a[m] == x)
        return true;
    else if (a[m] < x)
        return binary_search(a, m + 1, r, x);
    else
        return binary_search(a, l, m - 1, x);
}
// binary_search(a,a+n,key)
// binary_search(a+x,a+y,key) tim kiem trong doan x den y
// binary_search(v.begin(),v.end(),key) doi voi vector
// binary_search(v.begin()+x,v.end()+y,key)
// tim phan tu dau tien nho hon x
// tim phan tu dau tien lon hon x
// tim phan tu dau cuoi cung lon hon x
// tim phan tu dau cuoi cung lon hon x
// li do phai xet them lan can vi vi tri m la trung binh
int first(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            // tim xem ben trai con k
            r = m - 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
int last(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            // tim xem ben phai con k
            l = m + 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
// ap dung cho mang,vector duoc sap xep,set,map
//  lower_bound(iter1,iter2,key) tim kiem [iter1,iter2) => tra ve vi tri dau tien >= key
// neu ma cac phan tu trong mang deu nho hon key thi => iter2

//  upper_bound(iter1,iter2,key) tim kiem [iter1,iter2) => tra ve vi tri dau tien > key
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // if(bs(a,n,x))
    // if (binary_search(a, 0, n - 1, x))
    // {
    //     cout << "Found!" << endl;
    // }
    // else
    // {
    //     cout << "Not Found!" << endl;
    // }
    auto it = lower_bound(a, a + n, x); // tim vt dau tien lon hon bang key trong mang a
    cout << *it << endl;                // gia tri o vi tri it
    cout << it - a << endl;
    if (it == (a + n))
    {
        cout << "K tim thay ptu >=" << x << endl;
    }
    return 0;
}