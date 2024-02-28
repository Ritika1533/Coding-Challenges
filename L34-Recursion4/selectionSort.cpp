#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
// printing array
void printArray(int *arr, int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}
// recursion selection sort
void selectionSort(int *arr, int n)
{
   printArray(arr, n);
   if (n == 0 || n == 1)
      return;
   int min = INT_MAX;
   int index = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
         index = i;
      }
   }
   swap(arr[0], arr[index]);
   selectionSort(arr + 1, n - 1);
}

int main()
{
   int arr[] = {55, 3, 87, 0, 12};
   selectionSort(arr, 5);
   printArray(arr, 5);
}
/*
55 3 87 0 12
3 87 55 12
87 55 12
55 87
87
0 3 12 55 87*/