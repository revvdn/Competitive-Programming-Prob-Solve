#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
#include<algorithm>
#define int long long 

const int MAXN = 2e5+5;
const int INF = 1e18;

std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> dijkstra;
std::vector<std::tuple<int,int,int>> adj[MAXN];
std::vector<std::pair<int,int>> rain;
std::vector<std::pair<int,int>> res;
std::vector<int> que;
int ceiling[MAXN]; 
int dist[MAXN];

void filling () {
    for (int i=0; i<MAXN; i++) {
        dist[i] = ceiling[i] = INF;
    }
}

void input (int u, int v, int w, int z) {
    adj[u].push_back({v,w,z});
    adj[v].push_back({u,w,z});
}

void dijkstra_ceiling (int n) {
    dijkstra.push({0,n});
    while (!dijkstra.empty()) {
        auto top = dijkstra.top();
        dijkstra.pop();

        int d = top.first;
        int u = top.second;

        if (ceiling[u] <= d) continue;
        ceiling[u] = d;
        
        for (auto tmp : adj[u]) {

            int nxt = std::get<0>(tmp);
            int w = std::get<1>(tmp);
            int z = std::get<2>(tmp);

            if (z == 1) continue;

            if (ceiling[nxt] <= ceiling[u] + w) continue;
            dijkstra.push({ceiling[u] + w, nxt});
        }
    }
}

void dijkstra_dist () {
    dijkstra.push({0, 1});
    while (!dijkstra.empty()) {
        auto top = dijkstra.top();
        dijkstra.pop();

        int d = top.first;
        int u = top.second;

        if (dist[u] <= d) continue;
        dist[u] = d;

        if (ceiling[u] != INF) {
            res.push_back({dist[u], dist[u] + ceiling[u]});
        }

        for (auto tmp : adj[u]) {

            int nxt = std::get<0>(tmp);
            int w = std::get<1>(tmp);
            int z = std::get<2>(tmp);

            if (z == 2) continue;

            if (dist[nxt] <= dist[u] + w) continue;
            dijkstra.push({dist[u] + w, nxt});
        }
    }
}

void solve () {
    int n,m; std::cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u,v,w,z;
        std::cin >> u >> v >> w >> z;
        input(u,v,w,z);
        if (z == 2) input(u,v,w,1);
    }

    int q; std::cin >> q;
    for (int i = 1; i <= q; i++) {
        int x; std::cin >> x;
        que.push_back(x);
    }

    dijkstra_ceiling(n);
    while (!dijkstra.empty()) dijkstra.pop();
    dijkstra_dist();

    std::sort(res.begin(), res.end());

    int idx = INF;
    for (int i = 0; i < res.size(); i++) {
        idx = std::min(res[i].second, idx);
        res[i].second = idx;
    }

    for (auto i : que) {
        int l = 0, r = res.size() - 1;
        int ans = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (res[m].first > i) {
                r = m - 1;
            }
            else {
                ans = res[m].second;
                l = m + 1;
            }
        }
        std::cout << ans << "\n";    
    }
}

signed main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    filling();

    int t; t = 1;
    while (t--) solve();
    return 0;
}