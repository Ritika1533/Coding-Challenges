#include <iostream>
using namespace std;
void pairSum(int array[], int size)
{
    int sum;
    cout << "enter the pair sum you want:";
    cin >> sum;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == sum)
            {
                cout << min(array[i], array[j]) << " ";
                cout << max(array[i], array[j]);
                cout << endl;
            }
        }
    }
}
int main()
{
    int array1[5] = {2, -3, 3, 3, -2};
    int array2[5] = {1, 2, 3, 4, 5};
    pairSum(array1, 5);
    pairSum(array2, 5);
}
/*
enter the pair sum you want:0
-2 2
-3 3
-3 3
enter the pair sum you want:5
1 4
2 3*/