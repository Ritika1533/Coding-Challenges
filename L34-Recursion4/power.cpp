#include <iostream>
using namespace std;
long long power(int x, int n)
{
	if (x == 0)
		return 0;
	if (n == 0)
		return 1;
	if (n < 0)
	{
		x = 1 / x;
		n = -n;
	}
	return x * power(x, n - 1);
}
int main()
{
	int x, n;
	cout << " x and n" << endl;
	cin >> x >> n;
	long long ans = power(x, n);
	cout << ans;
}