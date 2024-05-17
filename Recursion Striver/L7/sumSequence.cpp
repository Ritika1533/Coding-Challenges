#include <iostream>
#include <vector>
using namespace std;

void subSequence(int ind, vector<int> &ans, int n, int *arr, int target, int sum, vector<vector<int>> &output)
{
    if (ind == n)
    {
        if (sum == target)
        {
            output.push_back(ans);
            return;
        }
        return; // Added return statement
    }

    // pick the particular index at the subsequence or element added into subsequence
    ans.push_back(arr[ind]);
    sum = sum + arr[ind];
    subSequence(ind + 1, ans, n, arr, target, sum, output);
    ans.pop_back();
    sum = sum - arr[ind]; // Corrected update of sum
    // removed or not take or pick condition or element not added
    subSequence(ind + 1, ans, n, arr, target, sum, output);
}

int main()
{
    int arr[3] = {1, 2, 1};
    vector<vector<int>> output;
    vector<int> ans;
    int n = 3;
    int target = 2;
    int sum = 0;
    subSequence(0, ans, n, arr, target, sum, output);

    for (auto vec : output)
    {
        for (auto num : vec)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}