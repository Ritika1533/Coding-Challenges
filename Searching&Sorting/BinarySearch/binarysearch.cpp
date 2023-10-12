#include <iostream>
using namespace std;
int binarySearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start / 2 + (end - start) / 2;
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
int main()
{
    int even[6] = {2, 34, 45, 55, 69, 78};
    int odd[5] = {45, 78, 90, 102, 119};
    cout << "index at which key found is:" << binarySearch(even, 6, 78);
    cout << endl;
    cout << "index at which key found is:" << binarySearch(odd, 5, 0);
}
/*index at which key found is:5
index at which key found is:-1*/