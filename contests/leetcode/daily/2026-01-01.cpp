// LeetCode Daily Challenge - January 1, 2026
// Problem: 66. Plus One
// Link: https://leetcode.com/problems/plus-one/
// Difficulty: Easy
// Topics: Array, Math

/*
Problem Description:
You are given a large integer represented as an integer array digits, where each 
digits[i] is the ith digit of the integer. The digits are ordered from most 
significant to least significant in left-to-right order. The large integer does 
not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Constraints:
- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- digits does not contain any leading 0's.

Examples:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents 123. Incrementing by one gives 124.

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents 4321. Incrementing by one gives 4322.

Input: digits = [9]
Output: [1,0]
Explanation: The array represents 9. Incrementing by one gives 10.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Time Complexity: O(n) where n is the length of digits
    // Space Complexity: O(1) in-place, O(n) worst case when all digits are 9
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from right to left (least significant to most significant)
        for (int i = n - 1; i >= 0; i--) {
            // If current digit is less than 9, increment and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If digit is 9, set it to 0 and continue carry
            digits[i] = 0;
        }
        
        // If we reach here, all digits were 9 (e.g., 999 -> 1000)
        // Insert 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// Helper function to print vector
void printVector(const vector<int>& v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> digits1 = {1, 2, 3};
    cout << "Input: ";
    printVector(digits1);
    vector<int> result1 = sol.plusOne(digits1);
    cout << "Output: ";
    printVector(result1);
    cout << "Expected: [1,2,4]" << endl << endl;
    
    // Test Case 2
    vector<int> digits2 = {4, 3, 2, 1};
    cout << "Input: ";
    printVector(digits2);
    vector<int> result2 = sol.plusOne(digits2);
    cout << "Output: ";
    printVector(result2);
    cout << "Expected: [4,3,2,2]" << endl << endl;
    
    // Test Case 3
    vector<int> digits3 = {9};
    cout << "Input: ";
    printVector(digits3);
    vector<int> result3 = sol.plusOne(digits3);
    cout << "Output: ";
    printVector(result3);
    cout << "Expected: [1,0]" << endl << endl;
    
    // Test Case 4 - Edge case: all 9s
    vector<int> digits4 = {9, 9, 9};
    cout << "Input: ";
    printVector(digits4);
    vector<int> result4 = sol.plusOne(digits4);
    cout << "Output: ";
    printVector(result4);
    cout << "Expected: [1,0,0,0]" << endl;
    
    return 0;
}

/*
Approach:
1. Start from the rightmost digit (least significant)
2. If digit < 9, simply increment and return
3. If digit = 9, set it to 0 and continue to next digit (carry)
4. If all digits were 9, insert 1 at the beginning

Key Insight:
- We only need to handle carry when digit is 9
- If we increment a digit < 9, no further carry is needed
- Worst case: [9,9,9] -> [1,0,0,0] requires adding a new digit

Time Complexity: O(n) - single pass through array
Space Complexity: O(1) for modification, O(n) only when inserting new digit
*/
