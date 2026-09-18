#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int idx = -1;

    // Step 1: Find pivot
    for(int i = v.size() - 1; i > 0; i--) {
        if(v[i] > v[i - 1]) {
            idx = i - 1;
            break;
        }
    }

    // If already the largest permutation
    if(idx == -1) {
        reverse(v.begin(), v.end());
    }
    else {
        
        for(int i = v.size() - 1; i > idx; i--) {
            if(v[i] > v[idx]) {
                swap(v[i], v[idx]);
                break;
            }
        }

        reverse(v.begin() + idx + 1, v.end());
    }

    for(int x : v)
        cout << x << " ";

    return 0;
}