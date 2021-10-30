#include <iostream>

using namespace std;

int kiemtra(int a[], int n)
{
	int c25 = 0;
	int c50 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 25)//neu nguoi do co to tien 25
			c25++;//thi tang so tien to 25
		else if (a[i] == 50)//con neu khach co to tien to 50
		{
			if (c25 == 0)//ban dau neu chua co to 25 thi khong the ban ve
				return 0;//dung lai 
			c25--;//neu co thi tra lai to tien 25 va co them to 50
			c50++;
		}
		else//con lai neu khach co to 100
		{
			if (c25 == 0 || (c25 * 25 + c50 * 50 < 75))//khong the tra lai duoc nen k the ban ve
			{
				return 0;
			}
			else//neu co to 25 va 50
			{
				if (c50 != 0 && c25 != 0)
				{
					c50--;//uu tien cach tra lai bang to 25 va 50
					c25--;
				}
				else
				{
					c25 -= 3;//khong co to 50 thi tra lai bang 3 to 25
				}
			}
		}
	}
	return 1;//thi duyet cac dieu kien tren thi tra lai dung
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (kiemtra(a, n))// dieu kien dung
		cout << "YES";
	else
	{
		cout << " NO";// dieu kien sai
	}
	return 0;
}