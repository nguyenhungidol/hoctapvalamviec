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
    // doi cac phan tu hai cot c, d cung mot hang cho nhau
    c--;
    d--;
    for (int i = 0; i < n; i++)
    {
        int tmp = a[i][c];
        a[i][c] = a[i][d];
        a[i][d] = tmp;
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