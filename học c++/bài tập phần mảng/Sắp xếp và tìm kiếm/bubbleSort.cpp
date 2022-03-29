#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // duyet tu so i tiep theo thi duyet voi cac phan tu da sap xep truoc do 
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    bubbleSort(a, n);
    for (int x : a)
        cout << x << " ";
    return 0;
}