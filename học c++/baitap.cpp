#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        int init=1;
        int count=i;
        for (int j = 1; j <= b; j++)
        {
            if (j<=b-i)
            {
                cout <<count;
                count++;
            }else if(){
                cout<<init;
                init++;
            }
            
        }
        cout << endl;
    }
    return 0;
}