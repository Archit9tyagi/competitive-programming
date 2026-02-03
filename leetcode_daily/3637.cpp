class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;

        int i = 1;

        // 1️⃣ strictly increasing
        while (i < n && nums[i] > nums[i - 1]) i++;
        if (i == 1 || i == n) return false; // no increase or consumed all

        // 2️⃣ strictly decreasing
        while (i < n && nums[i] < nums[i - 1]) i++;
        if (i == n) return false; // no final increasing part

        // 3️⃣ strictly increasing again
        while (i < n && nums[i] > nums[i - 1]) i++;

        return i == n;
    }
};
