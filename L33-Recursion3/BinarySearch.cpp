#include <iostream>
using namespace std;
void printArray(int *arr, int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool binarySearch(int *arr, int start, int end, int key)
{
	printArray(arr, start, end);
	// base condition
	if (start > end)
	{
		return 0;
	}

	int mid = start + (end - start) / 2;

	if (key == arr[mid])
		return 1;

	// processing
	else if (key > arr[mid])
	{
		// recursive
		bool ans = binarySearch(arr, mid + 1, end, key);
		return ans;
	}
	else
	{
		bool ans = binarySearch(arr, start, mid - 1, key);
		return ans;
	}
}
int main()
{
	int arr[] = {2, 4, 6, 10, 14, 18};
	int key = 18;
	int size = 6;
	bool ans = binarySearch(arr, 0, 5, key);
	cout << ans;
}