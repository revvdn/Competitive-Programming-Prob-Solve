#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m; cin >> n >> m;
    bool track[n+5];
    memset(track, true, sizeof(track));
    int ans[n+5];
    while (m--) {
        int x; cin >> x;
        for (int i = x; i<=n; i++) {
            if (track[i]) {
                ans[i] = x;
                track[i] = false;
            }
        }
    }
    for (int i=1; i<=n; i++) cout << ans[i] << " ";
    return 0;
}