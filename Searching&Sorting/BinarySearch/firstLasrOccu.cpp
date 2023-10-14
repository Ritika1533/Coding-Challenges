
#include <iostream>
using namespace std;
int first(int array[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
// last occurance
int last(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int array[11] = {0, 3, 3, 3, 3, 3, 4, 4, 4, 5, 9};
    int key = 4;
    int firstIndex = first(array, 10, 4);
    cout << "First Occurrence = " << firstIndex;
    int lastIndex = last(array, 10, 4);
    cout << "\nLast Occurrence = " << lastIndex;
    cout << "\n TOTAL number of occurrance=" << lastIndex - firstIndex + 1;
}
