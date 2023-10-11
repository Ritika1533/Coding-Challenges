#include <iostream>
using namespace std;
void update(int array[], int size)
{
    array[0] = 120;
    cout << "array in function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "going back to main function" << endl;
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    update(array, 4);
    cout << "array in main function" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << " ";
    }
}
/*array in function
120 2 3 4
going back to main function
array in main function
120 2 3 4*/