#include <stdio.h>
#include <math.h>
int check(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((x1 - x2) * (y2 - y3) == (x2 - x3) * (y1 - y2))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int x[10001], y[10001];
    int logic = 0; // thang hang
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i = 0; i < n - 3; i++)
    {
        if (check(x[i], y[i], x[i + 1], y[i + 1], x[i + 2], y[i + 2]) == 0)
        {
            logic = 1; // k thang
            break;
        }
    }
    if (logic == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}