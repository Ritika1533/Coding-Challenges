#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
	// basecondition
	cout << "src " << src << "   dest " << dest << endl;
	if (src == dest)
	{
		cout << "reached home" << endl;
		return;
	}
	// processing part
	src++;
	// recursive part
	reachHome(src, dest);
}
int main()
{
	int src = 1, dest = 10;
	cout << endl;
	reachHome(src, dest);
}