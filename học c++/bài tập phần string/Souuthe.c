#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char c[1000];
        scanf("%s", &c);
        int check = 1;
        int chan = 0, le = 0;
        if (c[0] == 0)
        {
            printf("INVALID\n");
            check = 0;
            break;
        }
        else
        {
            for (int i = 0; i < strlen(c); i++)
            {
                if (c[i] < '0' || c > '9')
                {
                    printf("INVALID");
                    check = 0;
                    break;
                }
                else
                {
                    if (s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
                        chan++;
                    else
                        le++;
                }
            }
        }
        if (check != 0)
        {
            if (strlen(s) % 2 == 0 && chan > le)
                printf("YES");
            else if (strlen(s) % 2 != 0 && chan < le)
                printf("YES");
            else
                printf("NO");
        }
        printf("\n");
    }
    return 0;
}