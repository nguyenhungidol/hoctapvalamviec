#include <iostream>
#include <math.h>

using namespace std;

int kiemtra(int n) // kiem tra cac chu so
{
        int s1 = 0;
        int s9 = 0;
    while (n)
    {
        int phandu = n % 10; //xet tu hang don vi
        if (phandu == 1)
            s1 = 1;
        if (phandu == 9)
            s9 = 1; //day la k xuat hien so dep
        n /= 10;
    }
    return s1 && s9;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ok = 0;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (kiemtra(a[i]))
        {
            cout << a[i] << endl;
            ok = 1;
        }
    }
    if (!ok)
    {
        cout << -1;
    }
    return 0;
}
