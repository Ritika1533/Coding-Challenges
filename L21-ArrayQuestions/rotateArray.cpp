#include <iostream>
#include <vector>
using namespace std;
vector<int> rotateArray(vector<int> v, int m)
{
    vector<int> temp(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        temp[(i + m) % v.size()] = v[i];
    }
    v = temp;
    return v;
}
void printArray(vector<int> a)
{
    for (auto i : a)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v;
    int m = 3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout << "array:";
    printArray(v);
    cout << endl;
    vector<int> ans = rotateArray(v, m);
    cout << "rotated array:";
    printArray(ans);
}