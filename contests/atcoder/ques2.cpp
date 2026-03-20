#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int N, M;
    cin >> N >> M;

    vector<long long> C(M + 1);

    for (int i = 1; i <= M; i++) {
        cin >> C[i];
    }

    vector<long long> demand(M + 1, 0);

    for (int i = 0; i < N; i++) {
        int A;
        long long B;
        cin >> A >> B;

        demand[A] += B;
    }

    long long ans = 0;

    for (int j = 1; j <= M; j++) {
        ans += min(C[j], demand[j]);
    }

    cout << ans << endl;

    return 0;
}