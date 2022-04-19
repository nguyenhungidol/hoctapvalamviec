#include <bits/stdc++.h>
using namespace std;
// LIFO : Last in first out : vao truoc ra sau
// Hieu rang: ban dau goi tu n den dieu kien dung lai,sau do su dung tu cai dung lai den cai n
// tinh tong cac so tu 1 -> n
int tong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + tong(n - 1);
    }
}
// giai thua
int gthua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * gthua(n - 1);
    }
}
// fibo thu n
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
// to hop
int nCk(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return
}
// ucln
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
// mu
int mu(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int x = mu(a, b / 2);
    if (b % 2 == 1)
    {
        return a * x * x;
    }
    else
        return x * x;
}
// dem so chu so cua n
int cnt(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + cnt(n / 10);
}
// kiem tra doi xung
int dx(int a[], int l, int r)
{
    if (l > r)
    {
        return 1;
    }
    if (a[l] != a[r])
    {
        return 0;
    }
    return dx(a, l + 1, r - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << mu(3, 5) << endl;
}