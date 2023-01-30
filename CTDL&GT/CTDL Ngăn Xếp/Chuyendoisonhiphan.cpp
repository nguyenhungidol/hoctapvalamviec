#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    while (n)
    {
        int r = n % 2;
        st.push(r);
        n /= 2;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}