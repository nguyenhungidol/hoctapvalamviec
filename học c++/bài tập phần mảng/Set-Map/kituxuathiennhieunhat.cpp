#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        // map
        map<char, int> mp;
        for (char x : s)
        {
            mp[x]++;
        }
        char res;
        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second > cnt)
            {
                cnt = it.second;
                res = it.first;
            }
        }
        cout << res << endl;
        // mang dem
        int a[256] = {0};
        for (char x : s)
        {
            a[x]++;
        }
        char res;
        int fre = 0;
        for (int i = 0; i < 256; i++)
        {
            if (a[i] >> fre)
            {
                fre = a[i];
                res = (char)(i);
            }
        }
        cout << (char)(res) << endl;
    }
}