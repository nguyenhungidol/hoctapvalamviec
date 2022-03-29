#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c[100];
    gets(c); // co dau cach
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
            cnt1++;
        if (isdigit(c[i]))
            cnt2++;
    }
    printf("%d %d %d", cnt1, cnt2, strlen(c) - cnt1 - cnt2);
}
