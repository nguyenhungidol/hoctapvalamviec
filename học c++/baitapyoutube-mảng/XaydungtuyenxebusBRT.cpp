#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ll Long Long
// sắp xếp qsort
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp); //0(nlogn)//sắp xếp lại các thành phố
        int cnt = 0,
            res = 2e9 + 1001;//khoảng cách ngắn nhất 
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < res)
            {
                res = a[i] - a[i - 1];
                cnt = 1;// số thành phố có khoảng cách ngắn nhất
            }
            else if (a[i] - a[i - 1] == res)
            {
                ++cnt;
            }
        }
        printf("%d %d\n", res, cnt);
    }
}