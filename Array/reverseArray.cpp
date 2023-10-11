#include <iostream>
using namespace std;
void printArray(int array[], int size)
{
    cout << "the array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void reverse(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {11, 22, 33, 44, 55, 66};
    reverse(arr, 5);
    reverse(brr, 6);
    printArray(arr, 5);
    printArray(brr, 6);
}
/*the array is:
5 4 3 2 1
the array is:
66 55 44 33 22 11*/