#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", &s);
        int id[10]; // mảng đánh dấu các phần tử
        for (i = 0; i < 10; i++)
        {
            id[i] = 0; // ban đầu cho các kí tự chưa xuất hiện
        }
        int n = strlen(s), dk = 1;
        for (i = 0; i < n; i++)
        {
            if (s[i] < '0' || s[i] > '9' || s[0] == '0')
            {
                dk = 0;
                printf("INVALID\n");
                break;
            }
        }
        // nếu kiểm tra điều kiện 1 k sai thì tiếp tục
        if (dk)
        {
            int index = 1;
            for (i = 0; i < n; i++)
            {
                if (s[0] != 0)
                {
                    id[s[i] - '0']++; //đếm sự xuất hiện của các kí tự từ 1 đến 9
                }
            }
            for (i = 0; i < 10; i++)
            {
                if (id[i] == 0) // nếu k có số từ 1 đến 9
                {
                    index = 0;
                    printf("NO\n");
                    break;
                }
            }
            if (index)
            {
                printf("YES\n");
            }
        }
    }
}