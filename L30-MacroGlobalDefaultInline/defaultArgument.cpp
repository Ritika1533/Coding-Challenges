#include <iostream>
using namespace std;
void print(int a[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int arr[6] = {6, 9, 8, 4, 3, 0};
    print(arr, 6);
    cout << endl;
    print(arr, 6, 3);
}