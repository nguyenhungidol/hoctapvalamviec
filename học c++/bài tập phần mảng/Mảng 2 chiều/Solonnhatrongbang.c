#include <stdio.h>
int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int n;
    scanf("%d", &n);
    int mina = 1e9, minb = 1e9;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        mina = min(a, mina);
        minb = min(b, minb);
    }
    printf("%d", mina * minb);
    return 0;
}