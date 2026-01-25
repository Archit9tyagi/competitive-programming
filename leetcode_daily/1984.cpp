class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int min_diff = INT_MAX;
        
        for (int i = 0; i <= (int)nums.size() - k; ++i) {
            int current_diff = nums[i + k - 1] - nums[i];
            min_diff = min(min_diff, current_diff);
        }
        
        return min_diff;
    }
};
