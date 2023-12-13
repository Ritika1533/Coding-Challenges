// copying a vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(5, 8);
    vector<int> last(a);
    for (int i : a)
    {
        cout << a[i];
    }
    cout << endl;
    cout << "2 nd array" << endl;

    for (int i : last)
    {
        cout << i;
    }
}

// 88888
// 2 nd array
// 88888