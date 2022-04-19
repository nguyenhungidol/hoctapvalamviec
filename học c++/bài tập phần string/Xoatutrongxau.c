#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int strcmp1(char a[], char b[])
{
    int n1 = strlen(a);
    int n2 = strlen(b);
    if (n1 != n2)
        return 0;
    for (int i = 0; i < n1; i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 1; i <= t; i++)
    {
        char c1[1000], c2[100];
        gets(c1);
        scanf("%s", c2);
        getchar();
        char *token = strtok(c1, " ");
        printf("Test %d: ", i);
        while (token != NULL)
        {
            if (strcmp1(token, c2) == 0)
            {
                printf("%s ", token);
            }
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
}