#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int sotn(char s[])
{
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int check(char c[])
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] % 2 != 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    char c[1000];
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        scanf("%s", c);
        if (check(c) && sotn(c))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
