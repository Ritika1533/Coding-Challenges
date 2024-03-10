#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter the no. of terms";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    auto it = min_element(v.begin(), v.end());
    cout << "Min element: " << *it << endl;

    it = max_element(v.begin(), v.end());
    cout << "Max element: " << *it << endl;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "sum" << sum << endl;

    int ct = count(v.begin(), v.end(), 5);
    cout << "count of 5: " << ct << endl;

    it = find(v.begin(), v.end(), 8);
    if (it != v.end())
    {
        cout << "yess present" << *it;
    }
    else
    {
        cout << "not present" << endl;
    }

    reverse(v.begin(), v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    string s = "ritika @ keshri";
    reverse(s.begin(), s.end());
    cout << endl
         << s;
} /*enter the no. of terms5
 89
 87
 45
 23
 09
 Min element: 9
 Max element: 89
 sum253
 count of 5: 0
 not present
 9 23 45 87 89
 irhsek @ akitir*/