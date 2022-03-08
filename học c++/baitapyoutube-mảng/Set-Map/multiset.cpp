#include <bits/stdc++.h>

// multiset<int> ten
// trong multiset co the them cac phan tu da xuat hien va van theo thu tu tang dan
// Bai toan : Cho mang co n phan tu va so nguyen k. doi voi day con lien tiep co do dai k in ra phan tu lon nhat
// unorderedset() cac ptu giam dan

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin>>x;
    multiset<int> ms;
    for (int i = 0; i < k; i++)
    {
        ms.insert(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        cout<<*ms.rbegin()<<" ";//luon xap xep theo thu tu tang dan
        ms.erase(ms.find(i-k));//xoa phan tu o dau day con
        ms.insert(a[i]);//them phan tu moi vao day xoa
    }
    return 0;
}