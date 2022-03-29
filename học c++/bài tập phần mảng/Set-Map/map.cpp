#include <bits/stdc++.h>
#include <map>
// map<datatype1, datatype2> ten;
// ten map[key]= ...;
// cac key da co roi k thay doi so luong map
// mp.size()
// mp.insert()
// count
// find
// erase
// ordered
// multimap luu cac phan tu co key giong nhau
// unordered_map
using namespace std;
int main()
{
    map<int, int> mp;
    mp[100] = 200;         // them (100,200)
    mp[300] = 400;         // them phan tu (300,400)
    mp.insert({300, 400}); // mot cach them khac
    mp.insert({500, 600});

    // cout<<mp.size()<<" ";
    // mp[100]=400; cap nhat chu khong thay doi so phan tu

    // for each sd voi pair hoac auto,interator

    // for(pair<int ,int> x : mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // for(auto it : mp){
    //     cout<<it.first<<" "<<it.second<<" ";
    // }
    // for(map<int,int>::iterator it =mp.begin();it!=mp.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
}