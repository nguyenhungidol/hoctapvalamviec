#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        int a[100][100];
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int res = 0, hang, cot;
        // tinh tong cac hang
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += a[i][j];
            }
            if (sum > res)
            {
                res = sum;
                hang = i;
            }
        }
        res = 0;
        // tong cac cot
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (j != hang)
                {
                    sum += a[j][i];
                }
            }
            if (sum > res)
            {
                res = sum;
                cot = i;
            }
        }
        printf("Test %d:\n", i);
        for (int i = 0; i < n; i++)
        {
            if (i != hang)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j != cot)
                    {
                        printf("%d ", a[i][j]);
                    }
                }
                printf("\n");
            }
        }
    }
}