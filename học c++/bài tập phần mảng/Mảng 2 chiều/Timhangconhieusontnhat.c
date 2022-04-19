#include <stdio.h>
#include <math.h>
int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int res = 0, k; // luu ki luc co nhieu so nguyen to nhat
    for (int i = 0; i < n; i++)
    {
        int cnt = 0; // dem so nguyen to trong hang
        for (int j = 0; j < n; j++)
        {
            if (snt(a[i][j]))
            {
                cnt++;
            }
        }
        if (cnt > res)
        {
            res = cnt; // tim hang co nhieu so nguyen to nhat
            k = i;     // hang co vi tri lon nhat
        }
    }
    printf("%d\n", k + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (snt(a[k][j]))
            {
                printf("%d ", a[k][j]);
            }
        }
        break;
    }
}