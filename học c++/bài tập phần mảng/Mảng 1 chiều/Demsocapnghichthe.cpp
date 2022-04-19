#include <bits/stdc++.h>

using namespace std;
// tron hai day da sap xep
int merge(int a[], int l, int m, int r)
{
    // hai day con da sap xep
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    // so sanh cac phan tu tuong ung voi do dai nho hon trong hai day
    int cnt = 0;
    while (i < x.size() && j < y.size())
    {
        // neu pt nho hon hoac hang thi luu vao mang a,bien l duoc hieu nhu de mo rong do lon mang,neu o vt nao nho hon thi dich vi tri do sang phai
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            cnt += x.size() - i;
            a[l] = y[j];
            l++;
            j++;
        }
    }
    // tiep tuc tron cac phan tu cua day dai hon
    while (i < x.size())
    {
        a[l] = x[i];
        l++;
        i++;
    }
    while (j < y.size())
    {
        a[l] = y[j];
        l++;
        j++;
    }
    return cnt;
}
int mergeSort(int a[], int l, int r)
{
    int dem = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        dem += mergeSort(a, l, m); // sx ben trai trung vi
        dem += mergeSort(a, m + 1, r);
        dem += merge(a, l, m, r);
    }
    return dem;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int ans = mergeSort(a, 0, n - 1);
    cout << ans << endl;
}