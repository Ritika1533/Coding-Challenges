#include <iostream>
using namespace std;

int main()
{
    int l, r, n;
    int arr[50];
    int pf[50] = {0};
    cout << "Enter the n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = arr[i] + pf[i - 1]; // Calculate prefix sum correctly
    }
    cout << "Enter the l and r:" << endl;
    cin >> l >> r;
    cout << pf[r] << "  " << pf[l - 1] << endl;
    int sum = pf[r] - pf[l - 1];
    cout << sum;
    return 0;
}