#include <iostream>
#include <math.h>
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
   int max1 = -1e9 - 1;
   int max2 = -1e9 - 1;
   for (int i = 0; i < n; i++)
   {
      if (a[i] > max1)
      {
         max2 = max1;
         max1 = a[i];
      }
      else if (a[i] > max2)
      {
         max2 = a[i];
      }
   }
   if (max2 == max1)
   {
      cout << "NOT FOUND";
    
   }else{
      cout<<max2;
   }
   return 0;
}