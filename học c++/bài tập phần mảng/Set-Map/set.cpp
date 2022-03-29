#include <bits/stdc++.h>
#include <set>
// olog(n)
// insert thêm phần tử trong set (nếu đã xuất hiện thì không thêm vào) s.insert()
// size đưa ra số phần tử trong set s.size
// find tìm kiếm một phần tử trong set (nếu thấy thì trả về phần tử đó còn k thì trả về s.end())
// count :tìm kiếm các phần tử trong mảng s.count(phần tử muốn tìm kiếm) (khác 0 thì xuất hiện)
// erase :xóa phần tử trong set s.erase()
//*s.begin() phần tử đầu tiên
//*s.rbegin() phần tử cuối cùng
// for each for(int (auto) x : s)
// for(set<int> iterator:: it=s.begin();it!=s.end();++it) vòng lặp bằng iterator    cout<<*it<< ;
using namespace std;
int main()
{
    set<int> s; // khai báo set
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
}