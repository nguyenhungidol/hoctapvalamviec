#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[100][100], b[100][100], matrantich[100][100];
        for (int i = 0; i < n; i++)
        {
            int cnt = 1;
            for (int j = 0; j < n; j++)
            {
                if (j <= i)
                {
                    a[i][j] = cnt;
                    cnt++;
                }
                else
                    a[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = a[j][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrantich[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    matrantich[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", matrantich[i][j]);
            }
            printf("\n");
        }
    }
}