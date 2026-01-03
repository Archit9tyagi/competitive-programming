/*
 * LeetCode Daily Challenge - 2026-01-03
 * Problem: 1411. Number of Ways to Paint N × 3 Grid
 * Difficulty: Hard
 * 
 * Problem Statement:
 * You have a grid of size n x 3 and you want to paint each cell of the grid 
 * with exactly one of the three colors: Red, Yellow, or Green while making 
 * sure that no two adjacent cells have the same color (i.e., no two cells 
 * that share vertical or horizontal sides have the same color).
 * 
 * Given n the number of rows of the grid, return the number of ways you can 
 * paint this grid. As the answer may grow large, the answer must be computed 
 * modulo 10^9 + 7.
 * 
 * Example 1:
 * Input: n = 1
 * Output: 12
 * Explanation: There are 12 possible way to paint the grid as shown.
 * 
 * Example 2:
 * Input: n = 5000
 * Output: 30228214
 * 
 * Constraints:
 * - n == grid.length
 * - 1 <= n <= 5000
 * 
 * Approach:
 * - Use dynamic programming based on pattern types
 * - color2: patterns with 2 colors (e.g., 121, 131, 212, 232, 313, 323) - 6 patterns
 * - color3: patterns with 3 colors (e.g., 123, 132, 213, 231, 312, 321) - 6 patterns
 * - Each color2 pattern can transition to 3 color2 patterns and 2 color3 patterns
 * - Each color3 pattern can transition to 2 color2 patterns and 2 color3 patterns
 */

class Solution {
public:
    int numOfWays(int n) {
        constexpr int kMod = 1'000'000'007;
        long color2 = 6;  // 121, 131, 212, 232, 313, 323
        long color3 = 6;  // 123, 132, 213, 231, 312, 321

        for (int i = 1; i < n; ++i) {
            const long nextColor2 = color2 * 3 + color3 * 2;
            const long nextColor3 = color2 * 2 + color3 * 2;
            color2 = nextColor2 % kMod;
            color3 = nextColor3 % kMod;
        }

        return (color2 + color3) % kMod;
    }
};
