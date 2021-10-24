#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int bctd = a * b;
    int bcbn = max(a, b);
    if (a > 0 && b > 0 || a < 0 && b < 0)
    {
        for (int i = bcbn; i <= bctd; i += bcbn)
        {
            if (i % a == 0 && i % b == 0)
            {
                cout << i;
            }
        }
    }
    if (a > 0 && b < 0 || a < 0 && b > 0)
    {
        cout << bcbn;
    }
    return 0;
}