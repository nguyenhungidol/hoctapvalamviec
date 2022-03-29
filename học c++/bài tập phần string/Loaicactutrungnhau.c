#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char c[1000];
    gets(c);
    char *token = strtok(c, " ");
    char a[20][50];//mang luu cac tu duoc tach ra trong sau
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        int ok = 1;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(a[i], a[j]) == 0)
            {
                ok = 0;
            }
        }
        if (ok)
            printf("%s ", a[i]);
    }
}