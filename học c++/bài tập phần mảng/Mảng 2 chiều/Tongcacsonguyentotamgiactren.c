#include <stdio.h>
#include <math.h>
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return n > 1;
}
int main()
{
    int n;
    int a[100][100];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                if (nt(a[i][j]))
                {
                    sum += a[i][j];
                }
            }
        }
    }
    printf("%d", sum);
}