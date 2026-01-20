class Solution {
public:
    vector<int> constructMinimumBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int p : nums) {
            // Even numbers are impossible
            if ((p & 1) == 0) {
                ans.push_back(-1);
                continue;
            }

            // Find rightmost zero bit
            int pos = 0;
            while (p & (1 << pos)) {
                pos++;
            }

            // Minimum x
            int x = p - (1 << pos);
            ans.push_back(x);
        }

        return ans;
    }
};
