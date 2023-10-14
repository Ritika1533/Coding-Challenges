#include <iostream>
using namespace std;
int peakMountain(int array[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return array[start];
}
int main()
{
    int array[7] = {77, 101, 500, 567, 865, 400, 1};
    cout << "\n PEAK MOUNTAIN=" << peakMountain(array, 7);
}
// PEAK MOUNTAIN=865