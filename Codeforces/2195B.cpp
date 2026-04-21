#include<iostream>
#include<vector>
#include<algorithm>

void solve () {
    int n; std::cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    bool vis[n + 1] = {false};
    bool check = true;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        std::vector<int> cur, target;
        int x = i;
        while (x <= n) {
            vis[x] = true;
            cur.push_back(a[x]);
            target.push_back(x);
            x *= 2;
        }
        
        std::sort(cur.begin(), cur.end());
        std::sort(target.begin(), target.end());

        if (cur != target) check = false;
    }
    std::cout << (check ? "YES\n" : "NO\n");
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}