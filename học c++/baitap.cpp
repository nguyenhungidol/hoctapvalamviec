#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char n;
    cin >> n;
    if (n >= 65 && n <= 129)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
