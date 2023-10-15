#include <iostream>
using namespace std;
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[minIndex] > array[j])
                minIndex = j;
        }
        swap(array[minIndex], array[i]);
    }
}
int main()
{
    int array[9] = {13, 72, 98, 29, 87, 66, 52, 51, 36};
    cout << "array is:";
    printArray(array, 9);
    cout << endl;
    selectionSort(array, 9);
    cout << "sorted array:";
    printArray(array, 9);
}
/*array is:13 72 98 29 87 66 52 51 36
sorted array:13 29 36 51 52 66 72 87 98*/