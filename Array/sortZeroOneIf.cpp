// HERE WE WILL SEE WHY WE CAN'T USE IF STATEMENT AND IF ELSE IF USE IT WILL EXECUTE IF OR ELSE IF OR ELSE
#include <iostream>
using namespace std;
void sortingZeroOne(int array[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (array[left] == 0 && left < right)
            left++;
        if (array[right] == 1 && left < right)
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
    int arr[10] = {0, 0, 0, 0, 1, 1, 1, 1};
    printArray(arr, 6);
    sortingZeroOne(arr, 6);
    printArray(arr, 6);
}
/*the array is:
0 1 0 1 0 0 1 1 1 0
the array is:
0 0 0 0 0 1 1 1 1 1
//here is the problem why we can't use if  statement
the array is:
0 0 1 1
the array is:
0 1 0 1
it will run and give correct ans in above case but in second case it fails
the array is:
0 0 0 0 1 1
the array is:
0 1 0 0 0 1 */