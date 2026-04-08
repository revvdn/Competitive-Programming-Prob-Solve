#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m; cin >> n >> m;
    int c[m], cnt[m];
    memset(cnt, 0, sizeof(cnt));
    for (int i=0; i<m; i++) cin >> c[i];
    while (n--) {
        int x,y; cin >> x >> y;
        cnt[x-1] += y;
    }
    int ans = 0;
    for (int i=0; i<m; i++) {
        ans += min(c[i], cnt[i]);
    }
    cout << ans;
    return 0;
}