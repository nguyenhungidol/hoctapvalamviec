#include <stdio.h>
#include <conio.h>

main()
{
    int a[10][10], b[10][10], c[10][10], matrantich1[10][10], matrantich2[10][10], m, n, p, q i, j, k;
    scanf("%d%d%d%d", &m, &n, &p);
    // nhap vao ma tran thu nhat
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // nhap vao ma tran thu hai
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // nhap vao ma tran thu 3
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &c[i][j]);
        }
    } // nhan hai ma tran
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            matrantich1[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                matrantich1[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // nhan ma tran vua tinh duoc voi ma tran thu 3
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            matrantich2[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                matrantich2[i][j] += matrantich1[i][k] * c[k][j];
            }
        }
    }
    // hien thi ket qua
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", matrantich2[i][j]);
        }
        printf("\n");
    }
}