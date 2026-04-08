/*
i have submitted and got AC, yayyy :))
Problem Name = Tree Distance I
Problem Link = https://cses.fi/problemset/task/1132/
Solution was submitted on = Monday, 06/04/2026
Solution link (+ verdict) = https://cses.fi/problemset/result/16812779/
Code Link = https://cses.fi/paste/fc07e3be4860ae731008aeb/
*/

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;

vector<int> adj[MAXN];
int max_d = -1, far_node = 0;
int dp[MAXN][2];

void dfs(int n, int p, int d, int dp_state) {
    dp[n][dp_state] = d;
    if (d > max_d) {
        far_node = n;
        max_d = d;
    }

    for (auto c : adj[n]) {
        if (c != p) {
            dfs(c, n, d+1, dp_state);
        }
    }
}

int main ()
{
    int n; cin >> n;
    for (int i=0; i<n-1; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    max_d = -1;
    dfs(1, 0, 0, 0);
    max_d = -1;
    dfs(far_node, 0, 0, 0);
    max_d = -1;
    dfs(far_node, 0, 0, 1);
    
    for (int i = 1; i<=n; i++) {
        cout << max(dp[i][0], dp[i][1]) << " ";
    }
    return 0;
}