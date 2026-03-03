#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin >> n >> k;
    int ans = 0;
    bool same = false;
    while (k > 0) {
        k -= n; // 2 
        ans++; // 1
        if (same) {
            same = !same;
        } else {
            n -= 1;
            same = !same;
        }
    }
    cout << ans << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}