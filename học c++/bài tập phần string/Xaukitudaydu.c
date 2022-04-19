#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int lis(char c[])
{
    int lis[strlen(c)];
    // lis[i] chieu dai day con dai nhat ket thuc tai chi so i
    for (int i = 0; i < strlen(c); i++)
    {
        // duyet qua 1 ki tu la chieu dai bang 1
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            // neu ki tu hien tai lon hon theo thu tu tu dien va do dai hien tai nho hon nen se cap nhat
            if (c[i] > c[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (lis[i] > res)
        {
            res = lis[i];
        }
    }
    return 26 - res;
}
int main()
{
    char s[1000];
    scanf("%s", s);
    printf("%d", lis(s));
}