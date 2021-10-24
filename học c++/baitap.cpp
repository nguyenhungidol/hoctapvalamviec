#include <iostream>
#include <math.h>

using namespace std;

int check(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) //chi xet den i=n-2 boi vi neu i la phan tu cuoi trong mang se khong the
    //so sanh voi phan tu tiep theo
    {
        if (a[i] >= a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            cout << a[i] << " ";
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
}
