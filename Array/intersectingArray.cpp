#include <iostream>
using namespace std;
void intersectingArray(int array1[], int size1, int array2[], int size2)
{
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else if (array1[i] == array2[j])
        {
            cout << array2[j] << " ";
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    cout << "intersecting element are :";
    intersectingArray(arr1, 6, arr2, 4);
}