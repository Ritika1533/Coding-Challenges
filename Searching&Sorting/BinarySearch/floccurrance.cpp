
#include <iostream>
using namespace std;
int first(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int last(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    cout << "First Occurrence = " << first(arr, 10, 8);
    cout << "\nLast Occurrence = " << last(arr, 10, 8);
}
// First Occurrence = 8
// Last Occurrence = 9