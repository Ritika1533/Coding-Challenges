#include <iostream>
using namespace std;
void tripletSum(int array[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[i] + array[j] + array[k] == sum)
                {
                    cout << array[i] << " " << array[j] << " " << array[k];
                    cout << endl;
                }
            }
        }
    }
}
int main()
{
    int sum;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "enter the sum you want:";
    cin >> sum;
    cout << endl;
    cout << "all the triplets that you wanted:" << endl;
    tripletSum(arr, 5, sum);
}
/*
enter the sum you want:12
all the triplets that you wanted:
3 4 5
enter the sum you want:10
all the triplets that you wanted:
1 4 5
2 3 5
*/