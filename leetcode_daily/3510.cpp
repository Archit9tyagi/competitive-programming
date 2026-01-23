 class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        vector<int> prev(n), next(n);
        vector<long long> val(n);

        for (int i = 0; i < n; i++) {
            val[i] = nums[i];   // promote to long long safely
            prev[i] = i - 1;
            next[i] = i + 1;
        }

        // (pairSum, leftIndex) → leftmost tie guaranteed
        set<pair<long long, int>> st;

        for (int i = 0; i + 1 < n; i++)
            st.insert({val[i] + val[i + 1], i});

        int inversions = 0;
        for (int i = 0; i + 1 < n; i++)
            if (val[i] > val[i + 1])
                inversions++;

        int ans = 0;

        while (inversions > 0) {
            auto [sum, i] = *st.begin();
            st.erase(st.begin());

            int j = next[i];
            if (j >= n) continue;

            int pi = prev[i];
            int nj = next[j];

            // Remove old pairs (always erase before changing values)
            if (pi != -1)
                st.erase({val[pi] + val[i], pi});
            st.erase({val[i] + val[j], i});
            if (nj < n)
                st.erase({val[j] + val[nj], j});

            // Remove old inversions
            if (pi != -1 && val[pi] > val[i]) inversions--;
            if (val[i] > val[j]) inversions--;
            if (nj < n && val[j] > val[nj]) inversions--;

            // Merge
            val[i] = sum;

            // Relink
            next[i] = nj;
            if (nj < n) prev[nj] = i;

            // Add new pairs + inversions
            if (pi != -1) {
                st.insert({val[pi] + val[i], pi});
                if (val[pi] > val[i]) inversions++;
            }
            if (nj < n) {
                st.insert({val[i] + val[nj], i});
                if (val[i] > val[nj]) inversions++;
            }

            ans++;
        }

        return ans;
    }
};
