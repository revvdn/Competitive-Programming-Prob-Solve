/*
Segment Tree Template
Single element update, range query.
*/
#include <vector>

struct SegmentTree {
    int n;
    std::vector<int> tree;
    SegmentTree(int _n) : n(_n) {
        tree.assign(4 * n, 0);
    }
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr) {
            tree[v] = new_val;
        } else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) update(2 * v, tl, tm, pos, new_val);
            else update(2 * v + 1, tm + 1, tr, pos, new_val);
            tree[v] = tree[2 * v] + tree[2 * v + 1]; // Change this for min/max
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(2 * v, tl, tm, l, std::min(r, tm)) +
               query(2 * v + 1, tm + 1, tr, std::max(l, tm + 1), r);
    }
};
