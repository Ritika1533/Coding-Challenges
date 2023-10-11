#include <iostream>
using namespace std;
void printArray(char array[], int size)
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
    char ch[6] = {'a', 'b', 'c'};
    printArray(ch, 6);
    cout << ch[1];
}
/*printing the array:
a b c
printing done
b*/