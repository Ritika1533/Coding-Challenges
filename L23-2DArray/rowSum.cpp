#include <iostream>
using namespace std;
int maxRowSum(int a[][4], int row, int col)
{
    int maxi = -1, rowIndex;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
        if (maxi < sum)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}
// to print row wise sum
void rowWiseSum(int a[][4], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += a[i][j];
        }
        cout << "sum of row " << i << ": " << sum;
        cout << endl;
    }
}

int main()
{
    int a[3][4];
    cout << "enter array element:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> a[row][col];
        }
    }

    cout << "array is:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << a[row][col] << "\t";
        }
        cout << "\n";
    }
    rowWiseSum(a, 3, 4);
    cout << "maximum row index is:" << maxRowSum(a, 3, 4);
    return 0;
}
/*
array is:
1       2       4       5
3       0       5       1
7       6       9       0
sum of row 0: 12
sum of row 1: 9
sum of row 2: 22

array is:
1       4       5       7
8       3       9       6
5       1       2       3
sum of row 0: 17
sum of row 1: 26
sum of row 2: 11
maximum row index is:1
*/