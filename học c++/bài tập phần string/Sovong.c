#include <stdio.h>
#include <string.h>
int check(char s[])
{
    int n = strlen(s) + 1, up = 0, t;
    for (int i = n - 2; i >= 0; i--)
    {
        t = s[i] - '0';
        if ((t * n + up) % 10 != 9)
            return 0;
        up = (t * n + up) / 10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[100];
        scanf("%s", s);
        if (check(s) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}