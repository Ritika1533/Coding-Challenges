#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {7, 8, 45, 2, 78, 99, 89, 56, 34, 90};

    printVector(v);
    sort(v.begin(), v.end());
    printVector(v);
}
/*
sort(v.begin(),v.end());
7 8 45 2 78 99 89 56 34 90
2 7 8 34 45 56 78 89 90 99
*/