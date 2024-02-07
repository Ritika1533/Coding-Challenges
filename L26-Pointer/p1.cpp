#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {23, 122, 41, 67};
    cout << "address of first location of array: " << arr << endl;
    cout << "value at first location of array: " << arr[0] << endl;
    cout << "address of first location of array: " << &arr[0] << endl;
    cout << "value at first location of array: " << *arr << endl;
    cout << "value after increment " << *arr + 1 << endl;
    cout << "value after increment " << *(arr + 2) << endl;
    cout << "value after increment " << *(arr) + 1 << endl;
    int i = 3;
    cout << i[arr] << endl;
}
/*address of first location of array: 0x6ffde0
value at first location of array: 23
address of first location of array: 0x6ffde0
value at first location of array: 23
value after increment 24
value after increment 41
value after increment 24
67*/