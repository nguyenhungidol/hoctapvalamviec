#include <stdio.h>
#include <math.h>

int main()
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
    int c, d;
    scanf("%d%d", &c, &d);
    // doi cac phan tu hai hang c, d cung mot cot cho nhau
    for (int i = 0; i < m; i++)
    {
        int tmp = a[c - 1][i];
        a[c - 1][i] = a[d - 1][i];
        a[d - 1][i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}