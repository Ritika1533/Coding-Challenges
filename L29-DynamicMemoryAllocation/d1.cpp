#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter value of n" << endl;
    cin >> n;
    cout << "enter value of m" << endl;
    cin >> m;
    // creation of 2d array dynamically
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    // now user input
    cout << "enter array element" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // array output
    cout << "array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
/*
enter value of n
4
enter array element
1
2
3
4
5
6
7
8
9
1
2
3
4
5
6
7
array:
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
enter value of n
2
enter value of m
3
enter array element
1
4
5
2
7
9
array:
1 4 5
2 7 9*/