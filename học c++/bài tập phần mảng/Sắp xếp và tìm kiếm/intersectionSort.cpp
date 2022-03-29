#include <bits/stdc++.h>
using namespace std;
void intersectonSort(int a[], int n)
{
    // ban dau k chen vao vi tri dau tien
    for (int i = 1; i < n; i++)
    {
        // lay ra phan tu o vi tri i
        int x = a[i];
        int pos = i - 1;
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    intersectonSort(a, n);
    for (int x : a)
        cout << x << " ";
}