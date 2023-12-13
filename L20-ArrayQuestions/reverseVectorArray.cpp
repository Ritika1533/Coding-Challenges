#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> printReverseVector(vector<int> ans)
{
    for (int i : ans)
    {
        cout << i << " ";
    }
    return ans;
}
vector<int> printVector(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    return v;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    vector<int> ans = reverse(v);
    cout << "printing vector" << endl;
    printVector(v);
    cout << endl
         << "printing reversed vector" << endl;
    printReverseVector(ans);
    // printing vector
    // 11 7 3 12 4
    // printing reversed vector
    // 4 12 3 7 11
}