#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(2, 8) << endl;
    vector<int> v = {-7, -9, -4};
    cout << all_of(v.begin(), v.end(),
                   [](int val)
                   { return val > 0; });
    cout << endl;
    cout << any_of(v.begin(), v.end(),
                   [](int val)
                   { return val > 0; });
    cout << endl;
    cout << none_of(v.begin(), v.end(),
                    [](int val)
                    { return val > 0; });
    cout << endl;
}