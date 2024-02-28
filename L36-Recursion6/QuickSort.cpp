#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
	int randomIndex = s + rand() % (e - s + 1);
	swap(arr[randomIndex], arr[s]);
	int pivortElement = arr[s];
	int count = 0;
	for (int i = s + 1; i <= e; i++)
	{
		if (pivortElement >= arr[i])
			count++;
	}
	int pivortIndex = s + count;
	swap(arr[s], arr[pivortIndex]);
	int i = s, j = e;
	while (i < pivortIndex && j > pivortIndex)
	{
		while (arr[i] < pivortElement)
			i++;
		while (arr[j] > pivortElement)
			j--;
		if (i < pivortIndex && j > pivortIndex)
		{
			swap(arr[i++], arr[j--]);
		}
	}
	return pivortIndex;
}
void quickSort(int *arr, int s, int e)
{
	if (s >= e)
		return;
	int pivortIndex = partition(arr, s, e);
	quickSort(arr, s, pivortIndex - 1);
	quickSort(arr, pivortIndex + 1, e);
}
void printArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = {3, 5, 1, 76, 0};
	int s = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	int e = size - 1;
	quickSort(arr, s, e);
	printArray(arr, size);
}