#include <iostream>
using namespace std;
int firstOccurrence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

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
        int mid = start + (end - start) / 2;
    }
    return ans;
}
// last occurance
int lastOccurrence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

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
        int mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int array[11] = {0, 3, 3, 3, 3, 3, 4, 4, 4, 5, 9};
    int key = 4;
    int first, last;
    cout << "first occurrance of 4 is at index :";
    first = firstOccurrence(array, 11, 3);
    cout << first;
    cout << endl;
    cout << "last occurrance of 4 is at index :";
    cout << lastOccurrence(array, 11, 3);
}
