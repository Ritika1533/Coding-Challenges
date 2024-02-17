#include <iostream>
using namespace std;
int getSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getSum(arr, n);
}