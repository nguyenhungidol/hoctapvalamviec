#include <iostream>
#include <math.h>

using namespace std;

int kiemtra(int n)// kiem tra cac chu so 
{
    while (n)
    {
        int phandu = n % 10; //xet tu hang don vi
        if (phandu % 2 == 0) return 0;
        n/=10;
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (kiemtra(a[i])) count++;
    }
        cout << count<<" ";
    for (int i = 0; i < n; i++)
    {
        if (kiemtra(a[i])) cout<<a[i]<<" ";
    }
    return 0;
}
