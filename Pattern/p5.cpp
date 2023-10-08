#include <iostream>
using namespace std;
int main()
{
    int row, count = 1;
    cout << "enter the no of row" << endl;
    cin >> row;
    int i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << count << "\t";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*enter the no of row

3
123
456
789*/