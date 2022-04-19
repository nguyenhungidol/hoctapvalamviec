#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b)
{
    char x[100], y[100], z[100], t[100];
    strcpy(x, (char *)a); // copy a vao x
    strcpy(z, x);         // ban chat hai xau x,z giong nhau
    strcpy(y, (char *)b); // luu b vao y
    strcpy(t, y);         // t va y giong nhau
    strcat(x, y);         // noi x va y voi nhau duoc 1 xau lien nhau
    strcat(t, z);         // noi t va z voi nhau duoc 1 xauu nguoc voi xau tren
    // so sanh do dai theo thu tu tu dien cua cung 1 xau nhung khac chieu
    if (strcmp(x, t) < 0)
        return -1;
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char a[n][100];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for (int i = 0; i < n; i++)
        {
            printf("%s", a[i]);
        }
        printf("\n");
    }
}