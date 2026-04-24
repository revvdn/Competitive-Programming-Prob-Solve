/*
Disjoint Set Union (DSU) Template
*/
#include <vector>
#include <numeric>

struct DSU {
    std::vector<int> parent, size;
    DSU(int n) {
        parent.resize(n + 1);
        std::iota(parent.begin(), parent.end(), 0);
        size.assign(n + 1, 1);
    }
    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (size[root_i] < size[root_j]) std::swap(root_i, root_j);
            parent[root_j] = root_i;
            size[root_i] += size[root_j];
        }
    }
};
