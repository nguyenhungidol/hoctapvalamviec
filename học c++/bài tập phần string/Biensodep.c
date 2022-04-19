#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check1(char c[])
{
    if (c[6] < c[7] && c[7] < c[8] && c[8] < c[10] && c[10] < c[11])
    {
        return 1;
    }
    return 0;
}
int check2(char c[])
{
    int ans1 = 0, ans2 = 0;
    if (c[6] == c[7] && c[7] == c[8])
        ans1 = 1;
    if (c[10] == c[11])
        ans2 = 1;
    if (ans1 == 1 && ans2 == 1)
        return 1;
    return 0;
}
int check3(char c[])
{
    if (c[6] != '6' && c[6] != '8')
        return 0;
    if (c[7] != '6' && c[7] != '8')
        return 0;
    if (c[8] != '6' && c[8] != '8')
        return 0;
    if (c[10] != '6' && c[10] != '8')
        return 0;
    if (c[11] != '6' && c[11] != '8')
        return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[1000];
        scanf("\n%[^\n]s", &c);
        if (check1(c) || check2(c) || check3(c))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}