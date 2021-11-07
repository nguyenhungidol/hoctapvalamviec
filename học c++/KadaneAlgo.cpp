// In ra dãy con liên tiếp co tong lớn nhất



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum1 = 0;    //tinh tong cac day so con
    long long sum2 = -1e9; //luu ki luc cua tong lon nhat
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
        sum2 = max(sum1, sum2);//cap nhat tong lon nhat
        if (sum1 < 0)
        {
            sum1 = 0;
        }
    }
    cout << sum2;
    return 0;
}