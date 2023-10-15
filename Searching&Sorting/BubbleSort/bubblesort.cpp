#include <iostream>
using namespace std;
void bubbleSort(int array[], int n)
{
    for (int i = 1; i < n; i++) // i<n
    {
        bool swapped = false;
        for (int j = 0; j < (n - i); j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                swapped = true;
                // any one swapped then it will became true
            }
        }
        if (swapped == false)
            break;
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
    cout << "Before Bubble sort Array is:";
    printArray(array, 9);
    cout << endl;
    bubbleSort(array, 9);
    cout << "After Bubble sort Array is:";
    printArray(array, 9);
}
/*Before Bubble sort Array is:13 72 98 29 87 66 52 51 36
After Bubble sort Array is:13 29 36 51 52 66 72 87 98*/