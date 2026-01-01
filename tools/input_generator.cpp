// Cross-platform compatible headers
#include <iostream>
#include <vector>
#include <set>
#include <random>
#include <chrono>
#include <string>
#include <utility>
using namespace std;

// ==================== RANDOM INPUT GENERATOR ====================
// Generates random test cases for stress testing

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// Random integer in range [l, r]
int random_int(int l, int r) {
    uniform_int_distribution<int> dist(l, r);
    return dist(rng);
}

// Random long long in range [l, r]
long long random_ll(long long l, long long r) {
    uniform_int_distribution<long long> dist(l, r);
    return dist(rng);
}

// Random array of size n with elements in range [l, r]
vector<int> random_array(int n, int l, int r) {
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i] = random_int(l, r);
    }
    return arr;
}

// Random string of length n with lowercase letters
string random_string(int n) {
    string s;
    for(int i = 0; i < n; i++) {
        s += char('a' + random_int(0, 25));
    }
    return s;
}

// Random tree with n nodes (returns edges)
vector<pair<int, int>> random_tree(int n) {
    vector<pair<int, int>> edges;
    for(int i = 2; i <= n; i++) {
        int parent = random_int(1, i - 1);
        edges.push_back({parent, i});
    }
    return edges;
}

// Random graph with n nodes and m edges
vector<pair<int, int>> random_graph(int n, int m) {
    set<pair<int, int>> edge_set;
    while(edge_set.size() < m) {
        int u = random_int(1, n);
        int v = random_int(1, n);
        if(u != v) {
            edge_set.insert({min(u, v), max(u, v)});
        }
    }
    return vector<pair<int, int>>(edge_set.begin(), edge_set.end());
}

int main() {
    // Example: Generate test case for array problem
    int n = random_int(5, 10);
    cout << n << endl;
    
    vector<int> arr = random_array(n, 1, 100);
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
