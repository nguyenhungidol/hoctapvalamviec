#include <bits/stdc++.h>
using namespace std;
struct number
{
    int val; // số cần tìm(số không giảm)
    int fre; // tan suat
};
int check(int n) // hàm kiểm tra từng chữ số hay tách chữ số rồi so sánh các chữ số liền nhau
{
    while (n >= 10)
    {
        int r = n % 10;
        if (r < (n / 10) % 10)
            return 0;
        n /= 10;
    }
    return 1;
}
int find(number a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].val == x)
            return i;
    }
    return -1;
}
int cmp(const void *a, const void *b)
{
    number *x = (number *)a;
    number *y = (number *)b;
    return y->fre - x->fre;
}
int main()
{
    number a[100001]; // lưu số k giảm và tần suất xuất hiện của nó
    int n = 0;
    int x;
    while ((scanf("%d", &x)) != -1)
    {
        if (check(x))
        {
            int idx = find(a, n, x);
            if (idx != -1)
            {
                a[idx].fre += 1; // nếu xuất hiện rồi thì tăng thêm số lần xuất hiện
            }
            else
            {
                a[n].val = x; // chưa xuất hiện thì thêm vào
                a[n].fre = 1; // và ban đầu cho số lần xuất hiện là 1
                ++n;
            }
        }
    }
    qsort(a, n, sizeof(number), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].val << " " << a[i].fre << endl;
    }
}