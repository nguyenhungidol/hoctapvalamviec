#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
// tron hai xau thanh mot xau
void tron(char c1[], char c2[], char c12[], int n)
{
    int j = 0;
    // sau moi lan lap thi xau co them mot ki tu
    for (int i = 0; i < n; i++)
    {
        c12[j++] = c2[i];
        c12[j++] = c1[i];
    }
    // ki tu cuoi cung cua xau tron la null
    c12[j] = '\0';
}
void tach(char c1[], char c2[], char c12[], int n)
{
    int j = 0;
    // lay mot nua trai xau hop luu vao xau 1
    for (int i = 0; i < n; i++)
    {
        c1[i] = c12[j++];
    }
    for (int i = 0; i < n; i++)
    {
        c2[i] = c12[j++];
    }
}
int solve(int n)
{
    char c1[n], c2[n], c12[2 * n + 5], tmp[2 * n + 5]; // mang tmp dung de luu xau tron duoc tam thoi
    scanf("%s%s%s", c1, c2, c12);
    char t1[n], t2[n]; // luu xau 1 va 2 ban dau
    strcpy(t1, c1);
    strcpy(t2, c2);
    int cnt = 0; // dem so lan de tron duoc xau theo yeu cau
    while (1)
    {
        cnt++;
        tron(c1, c2, tmp, n);
        if (strcmp(tmp, c12) == 0)
            return cnt;
        tach(c1, c2, tmp, n);
        // sau khi tach neu tro lai xau ban dau thi vong lap dung lai
        if (!strcmp(c1, t1) && !strcmp(c2, t2))
            break;
    }
    return -1;
}
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (!n)
            break;
        printf("%d\n", solve(n));
    }
}