#include <iostream>
using namespace std;
bool checkSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool ans = checkSorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int arr[] = {2, 5, 8, 89, 33};
    bool ans = checkSorted(arr, 5);
    cout << ans;
}