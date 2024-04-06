// print 1 to n
#include <iostream>
using namespace std;
void printN(int n, int i)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    i++;
    printN(n, i);
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int i = 1;
    printN(n, i);
}
/*enter n20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20*/