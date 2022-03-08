#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int i = 0, j = 0, g = 0, h = 0;
    //i va j la chi so vi tri cac phan tu trong mang de so sanh
    //g va h la so chi so cac phan tu trong hai mang giao va hop
    int giao[min(n, m)], hop[m + n];
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            //lay phan tu trong mang a hoac mang b deu duoc
            giao[g] = a[i];
            hop[h] = a[i];
            g++;
            h++; //tiep tuc tang de mo rong cac phan tu trong mang cua giao va hop
            i++;
            j++; //tiep tuc tang so chi vi tri de so sanh
        }
        else if (a[i] > b[j])
        { //neu so sanh day 1 co phan tu tuong ung lon hon thi phai lay ptu day 2 vi can su sap xep tuong ung
            hop[h++] = b[j++];
        }
        else
        { //nguoc lai cac truong hop tren
            hop[h++] = a[i++];
        }
    }
    while (i < n)
    {
        hop[h++] = a[i++];
    }
    while (j < m)
    {
        hop[h++] = b[j++];
    }
    for (int i = 0; i < g; i++)
    {
        cout << giao[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < h; i++)
    {
        cout << hop[i] << " ";
    }
    return 0;
}