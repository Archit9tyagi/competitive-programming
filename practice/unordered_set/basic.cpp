#include<bits/stdc++17.h>
using namespace std;

int main() {
    unordered_set<int> s;

    // Insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);

    // Print
    cout << "Elements: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Search
    if (s.find(20) != s.end()) {
        cout << "20 Found\n";
    } else {
        cout << "20 Not Found\n";
    }

    // Delete
    s.erase(20);

    // Size
    cout << "Size: " << s.size() << endl;

    // Check empty
    if (s.empty()) {
        cout << "Set is empty\n";
    } else {
        cout << "Set is not empty\n";
    }

    // Clear
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}