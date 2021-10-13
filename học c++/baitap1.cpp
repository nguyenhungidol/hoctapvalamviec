#include <iostream>
#include <math.h>

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
    int min1 = 1e9 + 1;
    int min2 = 1e9 + 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] > min1 && a[i] < min2)
        {
            min2 = a[i];
        }
    }
    if (min2 == 1e9 + 1)
    {
        cout << min1 << " " << -1;
    }
    else
    {
        cout << min1 << " " << min2;
    }
    return 0;
}
