#include <iostream>
using namespace std;
void reverseArray(int *arr, int i, int j)
{
    if (i > j)
    {
        return;
    }
    if (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    reverseArray(arr, i, j);
}
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

    int arr[10] = {5, 9, 22, 78, 51, 0, 76, 34, 66, 89};
    int i = 0, j = 9;
    printArray(arr, 10);
    reverseArray(arr, i, j);
    printArray(arr, 10);
}