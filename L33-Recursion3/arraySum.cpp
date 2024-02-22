#include <iostream>
using namespace std;
int arraySum(int *arr, int size)
{
    if (size == 0)
        return 0;
    int sum = 0;
    sum = arr[0] + arraySum(arr + 1, size - 1);
    return sum;
}
int main()
{
    int arr[] = {2, 5, 8, 89, 33};
    int ans = arraySum(arr, 5);
    cout << ans;
}