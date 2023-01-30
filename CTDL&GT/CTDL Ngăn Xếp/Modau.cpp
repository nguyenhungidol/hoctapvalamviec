#include <bits/stdc++.h>

using namespace std;
// LIFO last in first out
// push them
// pop xoa
// top dau
// size
// empty
// O(1)
// them vao cuoi thi lay ra o dau
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    st.pop();
    if (st.empty())
    {
        cout << "STACK EMPTY" << endl;
    }
    return 0;
}