#include <bits/stdc++.h>

using namespace std;
int main()
{
    // khai bao pair
    // make pair(a,b) them phan tu
    pair<int, int> v = make_pair(100, 200);
    pair<int, int> v = {200, 300};
    pair<long long, long long> v;
    pair<string, int> v;
    // gom 2 thanh phan v.first - v.second
    cout << v.first << " " << v.second;
    pair<pair<int, int>, int> v;
    // tuple
    tuple<int, int, int> t{1, 2, 3};
    cout << get<1>(t) << endl;
}