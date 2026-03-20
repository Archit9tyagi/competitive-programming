#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    unordered_map<char, int> mp;
    int n = s.size();
    int l = 0, r = 0, max_len = 0;

    while (r < n) {
        mp[s[r]]++;

        if (mp.size() > k) {
            while (mp.size() > k) {
                mp[s[l]]--;          
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        if (mp.size() <= k) {
            max_len = max(max_len, r - l + 1);
        }

        r++;
    }

    cout << max_len;
    return 0;
}