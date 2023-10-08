#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the no of row" << endl;
    cin >> row;
    int i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*enter the no of row
5
12345
12345
12345
12345
12345*/