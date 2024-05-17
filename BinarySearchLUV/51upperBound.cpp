#include <iostream>
using namespace std;
void arrayInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int upperBound(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (e - s > 1)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] <= key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    if (arr[s] > key)
    {
        return s;
    }
    else if (arr[e] > key)
    {
        return e;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[10];
    int n, key;
    cout << "enter the number of terms of array: " << endl;
    cin >> n;
    cout << "enter the array elements: " << endl;
    arrayInput(arr, n);
    cout << "enter the element whose lower bound you want: " << endl;
    cin >> key;
    int ans = upperBound(arr, n, key);
    cout << ((ans != -1) ? arr[ans] : -1) << endl;
    return 0;
}