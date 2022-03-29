#include <bits/stdc++.h>
using namespace std;
int b[1000001] = {0};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (int i = 0; i < 1000000; i++)
        {
            if (b[a[i]] % 2 != 0)
            {
                cout << a[i] << endl;
                break;
            }
            b[a[i]] = 0;`     
        }
    }
    return 0;
}
