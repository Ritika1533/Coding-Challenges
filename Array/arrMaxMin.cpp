#include <iostream>
#include <climits>
using namespace std;
int getMax(int array[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, array[i]);
        // if (array[i] > max)
        // {
        //    max = array[i];
        // }
    }
    return maxi;
}
int getMin(int array[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, array[i]);
        // if (array[i] < min)
        //{
        //   min = array[i];
        //}
    }
    return mini;
}
void printArray(int array[], int size)
{
    cout << "the array is :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "enter the size of array:";
    cin >> size;
    int array[100];
    cout << "enter the element of array:" << endl;
    // array input
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    printArray(array, size);
    cout << "maximum element of array is:" << getMax(array, size) << endl;
    cout << "minimum element of array is:" << getMin(array, size) << endl;
}
/*enter the size of array:5
enter the element of array:
55
77
4
0
87
the array is :55 77 4 0 87
maximum element of array is:87
minimum element of array is:0*/