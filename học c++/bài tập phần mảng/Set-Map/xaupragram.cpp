#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        // map
        map<char, bool> mp;
        for (char x : s)
        {
            mp[tolower(x)] = true;
        }
        if (mp.size() == 26)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // set
        set<char> v;
        for (char x : s)
        {
            v.insert(tolower(x));
        }
        if (v.size() == 26)
            cout << "YES";
        else
            cout << "NO";
        // mang dem
        int a[26] = {0};
        for (char x : s)
        {
            a[tolower(x) - 'a'] = 1;
        }
        int cnt = 0; // tong so lan xuat hien cua cac ki tu
        for (int i = 0; i < 26; i++)
        {
            cnt += a[i];
        }
        if (cnt == 26)
            cout << "YES";
        else
            cout << "NO";
    }
}