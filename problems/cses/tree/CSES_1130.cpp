/*
Problem: Tree Matching
Platform: CSES
Link: https://cses.fi/problemset/task/1130
Difficulty: tree
Topic: dp

Approach:
* Use tree DP to find the maximum matching.
* dp[0][u] is the max matching in subtree of u if u is not matched with any child.
* dp[1][u] is the max matching in subtree of u if u is matched with one of its children.

Time Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5, INF = 1e9+7;
vector<int> adj[MAXN];
int dp[2][MAXN];

void dfs(int u, int p) {
    dp[0][u] = 0;
    dp[1][u] = -INF;

    for (auto c : adj[u]) {
        if (c == p) continue;
        dfs(c, u);
        dp[0][u] += max(dp[0][c], dp[1][c]);
        int opt = min((dp[0][c] - dp[1][c]), 0);
        dp[1][u] = max(dp[1][u], opt);
    }
    
    dp[1][u] += dp[0][u];
    dp[1][u]++;
}

int main ()
{
    int n; cin >> n;
    for (int i=1; i<n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (n == 0) return 0;
    dfs(1, 0);
    cout << max(dp[0][1], dp[1][1]);
    return 0;
}
