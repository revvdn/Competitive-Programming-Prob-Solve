#include<vector>
#include<queue>
#include<climits>

const long long MAXN = 2e5+5;
const long long INF = 1e18;

std::vector<std::pair<long long, long long>> adj[MAXN];

void dijkstra(auto adj) {
    long long v = adj.size();
    priority_queue<std:pair<long long, long long>, std::vector<std::pair<long long, long long>>, std::greater<std::pair<long long, long long>>> pq;
    std::vector<long long> dist(v, INF);

    dist[src] = 0;
    pq.emplace(0, src);

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int d = top.first;
        int u = top.second;

        if (d > dist[u]) continue;

        for (auto &p : adj[u]) {
            int v = p.first;
            int w = p.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }
}