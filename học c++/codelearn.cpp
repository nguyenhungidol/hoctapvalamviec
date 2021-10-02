#include <iostream>
using namespace std;
class ArrayCalculator
{
public:
    static int maxOfArray(int arr[], int n)
    {
        int maxValue = arr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; i++)
            {
                if (arr[i] > arr[j])
                {
                    maxValue = arr[i];
                }
            }
        }
        return maxValue;
    }
    static double maxOfArray(double arr[], int n)
    {
        double maxValue = arr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; i++)
            {
                if (arr[i] > arr[j])
                {
                    maxValue = arr[i];
                }
            }
        }
        return maxValue;
    }
    static double minOfArray(int arr[], int n)
    {
        double minValue = arr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; i++)
            {
                if (arr[i] < arr[j])
                {
                    minValue = arr[i];
                }
            }
        }
        return minValue;
    }
    static double minOfArray(double arr[], int n)
    {
        double minValue = arr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; i++)
            {
                if (arr[i] < arr[j])
                {
                    minValue = arr[i];
                }
            }
        }
        return minValue;
    }
};
int main()
{
    int arr1[]={3, 7, 9, -5};
    double arr2[]={3.4, 2.9, -6.8};
    cout << ArrayCalculator::maxOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
    cout << ArrayCalculator::maxOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
    cout << ArrayCalculator::minOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
    cout << ArrayCalculator::minOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
    return 0;
}