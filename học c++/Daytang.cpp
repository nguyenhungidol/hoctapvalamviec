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
    int b[n];
    int res = 0;
    int count = 1;
    int index;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > res)
        {
            res = count;
            index=i-res+1;
        }
    }
    cout<<res;
    for (int i = 0; i < n; i++)
    {
    cout<<a[index+i]<<" ";
    }
    return 0;
}