#include <iostream>
using namespace std;
void swapAlternate(int array[], int size)
{
    for (int i = 0; i + 1 < size; i += 2)
    {
        swap(array[i], array[i + 1]);
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
    int even[6] = {7, 5, 3, 9, 0, 1};
    int odd[5] = {22, 77, 55, 99, 00};
    printArray(even, 6);
    swapAlternate(even, 6);
    printArray(even, 6);
    printArray(odd, 5);
    swapAlternate(odd, 5);
    printArray(odd, 5);
}
/*
the array is:
7 5 3 9 0 1
the array is:
5 7 9 3 1 0
the array is:
22 77 55 99 0
the array is:
77 22 99 55 0
*/