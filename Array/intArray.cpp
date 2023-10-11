#include <iostream>
using namespace std;
void printArray(int array[], int size)
{
    cout << "printing the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "printing done" << endl;
}
int main()
{
    int first[5] = {0};
    int second[13] = {3, 6, 9};
    // cout<<second[3];
    // 0
    printArray(first, 5);
    printArray(second, 3);
    int secondSize = sizeof(second) / sizeof(int);
    cout << "secondSize" << secondSize;
}
/*
printing the array:
0 0 0 0 0
printing done
printing the array:
3 6 9 0 0 0 0 0 0 0 0 0 0
printing done
secondSize 13*/