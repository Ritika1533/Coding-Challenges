// only integer is returning
#include <iostream>
using namespace std;
long long int binarySearch(int array[], int size, int x)
{
    long long int ans = -1;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        if (square > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int mySqrt(int array[], int size, int x)
{
    return binarySearch(array, size, x);
}
int main()
{
    int x;
    cout << "enter the no ro find square root ";
    cin >> x;
    int array[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    cout << "square root of your number is :";
    cout << mySqrt(array, 15, x);
}
/*enter the no ro find square root 144
square root of your number is :12
enter the no ro find square root 196
square root of your number is :14*/