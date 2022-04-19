#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char *strlwr(char c[])
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] += 32;
        }
    }
    return c;
}
int main()
{
    char c[1000];
    scanf("\n%[^\n]s", &c);
    strlwr(c);
    char *token = strtok(c, " ");
    char a[20][50]; // mang luu cac phan tu tach duoc ra
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    int b[n]; // danh dau
    for (i = 0; i < n; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {                // danh dau phan tu bat dau dem
            int cnt = 1; // bat dau dem tu xuat hien
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    cnt++;    // dem so lan xuat hien
                    b[j] = 1; // danh dau phan tu nay da dem
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
}
