#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int index=0;
	int res = 0;//bien luu ki luc dai nhat cua day so 
	int count = 1;//dem do dai cua day so co cac 
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])//so sanh cac phan tu lien ke
		{
			index=i;
			count++;
		}
		else
		{
			count = 1;//reset de dem lai
		}
		res = max(res, count);//so sanh cac do dai do duoc
	}
	cout << res;
	return 0;
}