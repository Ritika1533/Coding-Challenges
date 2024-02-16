#include <iostream>
using namespace std;
int main()
{
    // array and pointer size
    int arr[10] = {23, 122, 41, 67};
    cout << sizeof(arr) << endl;
    cout << "1st  " << sizeof(*arr) << endl;
    cout << "2nd  " << sizeof(&arr) << endl;
    int *ptr = &arr[0];
    cout << "3rd  " << sizeof(ptr) << endl;
    cout << "4th  " << sizeof(*ptr) << endl;
    cout << "5th  " << sizeof(&ptr) << endl;
}
/*40
1st  4
2st  8
3st  8
4st  4
5st  8*/