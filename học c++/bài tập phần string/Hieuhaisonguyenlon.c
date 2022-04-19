#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void reserve(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++, r--;
    }
}
/// coi xau a lon hon xau b
void sub(char a[], char b[])
{
    int n1 = strlen(a), n2 = strlen(b), n = 0; // do dai cua xau hieu;
    int x[n1], y[n1], z[n1];
    for (int i = 0; i < n1; i++)
        x[i] = a[i] - '0';
    for (int i = 0; i < n2; i++)
        y[i] = b[i] - '0';
    reserve(a, n1);
    reserve(b, n2);
    for (int i = n2; i < n1; i++)
    {
        y[i] = 0;
    }
    int nho = 0;
    for (int i = 0; i < n1; i++)
    {
        int tmp = x[i] - y[i] - nho;
        if (tmp < 0)
        {
            nho = 1;
            z[n++] = tmp + 10;
        }
        else
        {
            nho = 0;
            z[n++] = tmp;
        }
    }
    int ok = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ok == 0 && z[i])
        {
            ok = 1;
        }
        if (ok)
            printf("%d", z[i]);
    }
    if (ok == 0)
        printf("0");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[1000], d[1000];
        scanf("%s%s", c, d);
        if (strlen(c) > strlen(d) || strlen(c) == strlen(d) && strcmp(c, d) > 0)
        {
            sub(c, d);
        }
        else
        {
            sub(d, c);
        }
        printf("\n");
    }
}