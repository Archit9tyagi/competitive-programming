class Solution {
public:
    long long minimumCost(string source, string target,
                          vector<string>& original,
                          vector<string>& changed,
                          vector<int>& cost) {

        using ll = long long;
        const ll INF = LLONG_MAX / 4;
        int n = source.size();

        // 1) Map each unique substring to an ID
        unordered_map<string, int> id;
        for (auto &s : original)
            if (!id.count(s)) id[s] = id.size();
        for (auto &s : changed)
            if (!id.count(s)) id[s] = id.size();

        int m = id.size();

        // 2) Collect valid substring lengths
        unordered_set<int> lengths;
        for (auto &s : original)
            lengths.insert(s.size());

        // 3) Build distance matrix
        vector<vector<ll>> dist(m, vector<ll>(m, INF));
        for (int i = 0; i < m; i++)
            dist[i][i] = 0;

        for (int i = 0; i < cost.size(); i++) {
            int u = id[original[i]];
            int v = id[changed[i]];
            dist[u][v] = min(dist[u][v], (ll)cost[i]);
        }

        // 4) Floyd–Warshall
        for (int k = 0; k < m; k++)
            for (int i = 0; i < m; i++)
                if (dist[i][k] < INF)
                    for (int j = 0; j < m; j++)
                        if (dist[k][j] < INF)
                            dist[i][j] = min(dist[i][j],
                                              dist[i][k] + dist[k][j]);

        // 5) DP over source
        vector<ll> dp(n + 1, INF);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            if (dp[i] == INF) continue;

            // single-character match
            if (source[i] == target[i])
                dp[i + 1] = min(dp[i + 1], dp[i]);

            // substring conversions
            for (int len : lengths) {
                if (i + len > n) continue;

                string s1 = source.substr(i, len);
                string s2 = target.substr(i, len);

                if (!id.count(s1) || !id.count(s2)) continue;

                ll c = dist[id[s1]][id[s2]];
                if (c < INF)
                    dp[i + len] = min(dp[i + len], dp[i] + c);
            }
        }

        return dp[n] == INF ? -1 : dp[n];
    }
};
