#include <iostream>
#include <vector>
using namespace std;
bool checkSortedRotated(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n; ++i)
    {
        if (nums[i] < nums[i - 1])
        {
            count++;
        }
    }

    // Check the wraparound condition inside the loop
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    if (count <= 1)
        return 1;
    else
        return 0;
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
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    cout << "array:";
    printArray(v);
    cout << endl;
    bool yesNo = checkSortedRotated(v);
    if (yesNo == 1)
    {
        cout << "sorted and rotated";
    }
    else
    {
        cout << "not sorted and rotated";
    }
}