/*
Problem: Tree Diameter
Platform: CSES
Link: https://cses.fi/problemset/task/1131
Difficulty: tree
Topic: graph

Approach:
* The diameter of a tree can be found using two DFS passes.
* First DFS from an arbitrary node to find the farthest node X.
* Second DFS from node X to find the farthest node Y. The distance between X and Y is the diameter.

Time Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
vector<int> adj[MAXN];
int dist[MAXN], far, ans = 0;

void dfs(int u, int p, int d) 
{
    dist[u] = d;
    if (d >= ans) {
        ans = d;
        far = u;
    }
    for (auto c : adj[u]) {
        if (c != p) {
            dfs(c, u, d+1);
        }
    }
}

int main ()
{
    int n; cin >> n;
    if (n == 0) return 0;
    for (int i=1; i<n; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);
    ans = 0;
    dfs(far,0,0);
    cout << ans;
    return 0;
}
