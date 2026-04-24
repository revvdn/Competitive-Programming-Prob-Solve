/*
Problem: Tree Distances I
Platform: CSES
Link: https://cses.fi/problemset/task/1132
Difficulty: tree
Topic: graph

Approach:
* The farthest node from any node in a tree is always one of the two endpoints of the tree's diameter.
* Find the diameter endpoints (U, V) using two DFS passes.
* Perform DFS from U and V to find distances to all other nodes.
* For each node, the answer is max(dist(node, U), dist(node, V)).

Time Complexity: O(N)
*/
#include<iostream>
#include<vector>
#include<algorithm>

const int MAXN = 2e5+5;

std::vector<int> adj[MAXN]; 
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
    int n; std::cin >> n;
    if (n == 0) return 0;

    for (int i = 0; i < n-1; i++) {
        int u, v; std::cin >> u >> v;

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
        std::cout << std::max(dp[i][0], dp[i][1]) << " ";
    }
    return 0;
}
