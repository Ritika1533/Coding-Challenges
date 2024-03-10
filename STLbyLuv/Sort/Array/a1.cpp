#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {6, 9, 0, 45, 2, 78, 99, 89, 56, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    sort(arr, arr + size);
    printArray(arr, size);
}
/*sort(arr,arr+size);
6 9 0 45 2 78 99 89 56 34 90
0 2 6 9 34 45 56 78 89 90 99


sort(arr,arr+3);
6 9 0 45 2 78 99 89 56 34 90
0 6 9 45 2 78 99 89 56 34 90*/