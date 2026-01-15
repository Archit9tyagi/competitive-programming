// 2943. Maximize Area of Square Hole in Grid
// Medium
// Companies

class Solution {
public:
    int longestConsecutive(vector<int>& bars) {
        sort(bars.begin(), bars.end());
        int best = 1, cur = 1;
        for (int i = 1; i < bars.size(); i++) {
            if (bars[i] == bars[i - 1] + 1) {
                cur++;
            } else {
                best = max(best, cur);
                cur = 1;
            }
        }
        return max(best, cur);
    }

    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int maxH = longestConsecutive(hBars) + 1;
        int maxV = longestConsecutive(vBars) + 1;
        int side = min(maxH, maxV);
        return side * side;
    }
};
