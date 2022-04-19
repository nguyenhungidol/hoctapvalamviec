#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c[1000], a[100][100];
    gets(c);
    strlwr(c);
    int n = 0;
    char *token = strtok(c, " ");
    while (token != NULL)
    {
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%c", a[i][0]);
    }
    printf("%s@ptit.edu.vn", a[n - 1]);
}