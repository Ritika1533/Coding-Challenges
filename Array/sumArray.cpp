#include <iostream>
using namespace std;
int sumArray(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "enter the size of array:";
    cin >> size;
    int arr[40];
    cout << "enter the element of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of all the array element:" << sumArray(arr, size);
}
/*enter the size of array:4
enter the element of array:
1
2
3
4
sum of all the array element:10*/