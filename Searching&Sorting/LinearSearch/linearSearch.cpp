#include <iostream>
using namespace std;
bool search(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[10] = {-9, 7, 55, 88, 34, -56, 0, 56, 77, 11};
    int key;
    cout << "enter the element you want to search in array:";
    cin >> key;
    bool found = search(array, 10, key);
    if (found == 1)
    {
        cout << "key present in array";
    }
    else
    {
        cout << "key not present in array";
    }
}
/*enter the element you want to search in array:0
key present in array
enter the element you want to search in array:87
key not present in array
*/