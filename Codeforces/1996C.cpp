#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q; cin >> n >> q;
    string x,y; cin >> x >> y;
    vector<vector<int>> prefx(n+1, vector<int>(26, 0));
    vector<vector<int>> prefy(n+1, vector<int>(26, 0));

    prefx[0][x[0] - 'a']++;
    prefy[0][y[0] - 'a']++;

    for (int i=0; i<n; i++) {
        prefx[i+1] = prefx[i];
        prefy[i+1] = prefy[i];
        prefx[i+1][x[i] - 'a']++;
        prefy[i+1][y[i] - 'a']++;
    }

    while (q--) {
        int l,r; cin >> l >> r;
        int ans = 0;
        for (int i=0; i<26; i++) {
            int cntx = prefx[r][i] - prefx[l-1][i];
            int cnty = prefy[r][i] - prefy[l-1][i];
            ans += abs(cntx - cnty);
        }
        cout << ans/2 << "\n";
    }
}

signed main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}