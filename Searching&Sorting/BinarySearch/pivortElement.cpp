#include <iostream>
using namespace std;
int pivortElement(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    int array[6] = {2, 9, 10, 11, 12, 1};
    cout << "PIVORT ELEMENT IS AT INDEX: " << pivortElement(array, 6);
}
/*PIVORT ELEMENT IS AT INDEX: 5
-------------------------------*/