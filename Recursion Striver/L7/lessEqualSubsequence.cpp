/*
class Solution {
    void solve(int ind, vector<int>& nums, int n, int target, int sum, vector<int>& ans, int& count) {
        if (ind == n) {
            if (!ans.empty()) { // Check if ans is not empty
                auto max_it = max_element(ans.begin(), ans.end());
                int max_val = *max_it;
                auto min_it = min_element(ans.begin(), ans.end());
                int min_val = *min_it;
                if (max_val + min_val <= target) {
                    count++;
                }
            }
            return;
        }

        // Include current element
        ans.push_back(nums[ind]);
        sum += nums[ind];
        solve(ind + 1, nums, n, target, sum, ans, count);

        // Exclude current element
        ans.pop_back();
        sum -= nums[ind];
        solve(ind + 1, nums, n, target, sum, ans, count);
    }

public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size(), count = 0;
        vector<int> ans;
        solve(0, nums, n, target, 0, ans, count);
        return count;
    }
};
*/