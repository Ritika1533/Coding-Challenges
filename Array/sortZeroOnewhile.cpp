#include <iostream>
using namespace std;
void sortingZeroOne(int array[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        while (array[left] == 0 && left < right)
            left++;
        while (array[right] == 1 && left < right)
            right--;
        if (left < right)
        {
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
}
void printArray(int array[], int size)
{
    cout << "the array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[10] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    printArray(arr, 10);
    sortingZeroOne(arr, 10);
    printArray(arr, 10);
}
/*the array is:
0 1 0 1 0 0 1 1 1 0
the array is:
0 0 0 0 0 1 1 1 1 1
the array is:
0 0 0 0 1 1
the array is:
0 0 0 0 1 1*/