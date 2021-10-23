#include <iostream>
using namespace std;
int kiemtra(int n){
    if(n%3==0){
        cout<<n<<" ";
    }
    return 1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = b; i >= a; i--)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        } 
        return i;
        if (i % 3 != 0 || i < a || i > b)
        {
            cout << "NOT FOUND";
        }
    }
}