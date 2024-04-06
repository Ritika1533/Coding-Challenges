// sum of n terms
#include <iostream>
using namespace std;
void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << " sum : " << sum;
        return;
    }
    sum = sum + i;
    i--;
    printSum(i, sum);
}
int main()
{
    int n;
    cout << "enter terms" << endl;
    cin >> n;
    int i = n;
    int sum = 0;
    printSum(i, sum);
}