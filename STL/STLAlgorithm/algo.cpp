// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(56);
    v.push_back(34);
    v.push_back(67);
    v.push_back(99);
    v.push_back(2);
    v.push_back(18);
    cout << "sorting in ascending order" << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl
         << "sorting in decending order" << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl
         << "reversing a vector" << endl;
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl
         << "maximum :" << *max_element(v.begin(), v.end());
    cout << endl
         << "maximum :" << *min(v.begin(), v.end());
    cout << endl
         << "summation:" << accumulate(v.begin(), v.end(), 0);
    cout << endl
         << "binary search:" << binary_search(v.begin(), v.end(), 99);
    cout << endl
         << "lowerbound:" << lower_bound(v.begin(), v.end(), 56) - v.begin() << endl;
    cout << endl
         << "upperbound:" << upper_bound(v.begin(), v.end(), 56) - v.begin() << endl;
    // sorting in ascending order
    // 2 18 34 56 67 99
    // sorting in decending order
    // 99 67 56 34 18 2
    // reversing a vector
    // 2 18 34 56 67 99
    // maximum :99
    // maximum :2
    // summation:276
    // binary search:1
    // lowerbound:3
    // upperbound:4
}