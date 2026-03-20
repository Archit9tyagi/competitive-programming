#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N+1);
    multiset<long long> s;

    for(int i = 1; i <= N; i++){
        cin >> A[i];
        s.insert(A[i]);
    }

    while(Q--){
        int K;
        cin >> K;

        vector<int> B(K);
        vector<long long> removed;

        for(int i = 0; i < K; i++){
            cin >> B[i];
            auto it = s.find(A[B[i]]);
            removed.push_back(A[B[i]]);
            s.erase(it);
        }

        cout << *s.begin() << "\n";

        for(auto x : removed){
            s.insert(x);
        }
    }
}