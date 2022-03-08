#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
// int cmp1(const void *a, const void *b)
// {
//     int *x = (int *)a;
//     int *y = (int *)b;
//     if (*x <= *y)
//         return -1;
//     else
//         return 1;
// }
// int cmp2(const void *a, const void *b)
// {
//     int *x = (int *)a;
//     int *y = (int *)b;
//     if (*x <= *y)
//         return 1;
//     else
//         return -1;
// }

int main()
{
    // int t;
    // scanf("%d", &t);
    // for (int i = 1; i <= t; i++)
    // {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            // scanf("%d", &b[i]);
        }
        sort(a,a+n);
        // qsort(b, n, sizeof(int), cmp2);
        for (int i = 0; i <  n; i++)
        {
            // if (i % 2 == 0)
            // {
                printf("%d ", a[i]);
            // }
            // else
            // {
            //     printf("%d ", b[i]);
            // }
        }
        printf("\n");
    // }
}