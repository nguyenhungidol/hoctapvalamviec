#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void latxau(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}
// quy dinh xau a co chieu dai hon xau b
void add(char a[], char b[])
{
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    // tao mang luu cac chu so trong xau
    int x[n1], y[n1], z[n1 + 1];
    for (int i = 0; i < n1; i++)
        x[i] = a[i] - '0'; // chuyen cac ki tu thanh so
    for (int i = 0; i < n2; i++)
        y[i] = b[i] - '0';
    latxau(x, n1);
    latxau(y, n2);
    for (int i = n2; i < n1; i++)
    {
        y[i] = 0; // con nhung ki tu thieu so voi do dai hon cho bang 0
    }
    int nho = 0;
    for (int i = 0; i < n1; i++)
    {
        int tmp = x[i] + y[i] + nho;
        z[n++] = tmp % 10;
        nho = tmp / 10;
    }
    // neu cong het cac hang ma van con nho thi luu them bien so vao mang z
    if (nho)
        z[n++] = nho;
    for (int i = n - 1; i >= 0; i--)
        printf("%d", z[i]);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[1001], d[1001];
        scanf("%s%s", c, d);
        if (strlen(c) >= strlen(d))
            add(c, d);
        else
            add(d, c);
        printf("\n");
    }
}