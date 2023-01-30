#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> tmp;
    for (char x : s)
    {
        if (x == '(')
        {
            tmp.push(x);
        }
        else
        {
            if (tmp.empty())
            {
                cout << "INVALID!\n";
                break;
            }
            else
            {
                tmp.pop();
            }
        }
    }
    if (tmp.empty())
    {
        cout << "VALID\n";
    }
    else
    {
        cout << "INVALID!\n";
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}