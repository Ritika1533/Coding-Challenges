#include <iostream>
#include <vector>
using namespace std;

void subSequence(int ind, vector<int> &ans, int n, int *arr)
{
    if (ind == n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return; // Added return statement
    }
    // pick the particular index at the subsequence or element added into subsequence
    ans.push_back(arr[ind]);
    subSequence(ind + 1, ans, n, arr);
    ans.pop_back();
    // removed or not take or pick condition or element not added
    subSequence(ind + 1, ans, n, arr);
}

int main()
{
    int arr[3] = {3, 1, 2};
    vector<int> ans;
    int n = 3;
    subSequence(0, ans, n, arr);
    return 0;
}