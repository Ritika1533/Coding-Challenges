#include <iostream>
using namespace std;
int linearSearch(int *arr, int size, int key)
{
    if (size == 0)
        return 0;
    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, key);
        return ans;
    }
}

int main()
{
    int key;
    int arr[] = {3, 2, 5, 1, 6};
    cout << "enter key" << endl;
    cin >> key;
    bool ans = linearSearch(arr, 5, key);
    cout << ans;
}