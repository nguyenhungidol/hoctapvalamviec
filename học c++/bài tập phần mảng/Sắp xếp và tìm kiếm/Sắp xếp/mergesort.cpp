#include <bits/stdc++.h>

using namespace std;
// tron hai day da sap xep
void merge(int a[], int l, int m, int r)
{
    // hai day con da sap xep
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    // so sanh cac phan tu tuong ung voi do dai nho hon trong hai day
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
}
void mergeSort(int a[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = (l + r) / 2;
    mergeSort(a, l, m); // sx ben trai trung vi
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    mergeSort(a, 0, n - 1);
    for (int x : a)
    {
        cout << x << " ";
    }
}