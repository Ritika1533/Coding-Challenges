#include <iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
int main()
{
    int array[9] = {13, 72, 98, 29, 87, 66, 52, 51, 36};
    cout << "Before insertion  sort Array is:";
    printArray(array, 9);
    cout << endl;
    insertionSort(array, 9);
    cout << "After insertion sort Array is:";
    printArray(array, 9);
}
/*Before insertion  sort Array is:13 72 98 29 87 66 52 51 36
After insertion sort Array is:13 29 36 51 52 66 72 87 98*/