#include <iostream>
using namespace std;
int pivortElement(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int binarySearch(int array[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int search(int array[], int n, int k)
{
    int pivort = pivortElement(array, n);
    if (k >= array[pivort] && k <= array[n - 1])
    {
        return binarySearch(array, pivort, n - 1, k);
    }
    else
    {
        return binarySearch(array, 0, pivort - 1, k);
    }
}
int main()
{
    int array[8] = {20, 25, 5, 10, 15, 16, 17, 18};
    cout << "\n pivort element index :" << search(array, 8, 18);
}