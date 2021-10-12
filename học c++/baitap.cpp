#include <iostream>

using namespace std;
// xac dinh so dong va so cot
// ki tu so va chu in ra la cai gi
// i la dong j la cot
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j; j <= 2 * i - 2; j++)
        {
            cout << "~";
        }
        for (int j; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
