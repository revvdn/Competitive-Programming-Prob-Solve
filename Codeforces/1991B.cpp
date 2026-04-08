#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin >> n;
    int b[n];
    for (int i=0; i<n-1; i++) cin >> b[i];
    int a[n];
    a[0] = b[0];
    a[n-1] = b[n-2];
    for (int i=1; i<n-1; i++) {
        a[i] = b[i] | b[i-1];
    }
    bool check = true;
    for (int i=0; i<n-1; i++) {
        if (b[i] != (a[i] & a[i+1])) check = false;
    }
    if (check) {
        for (auto i : a) cout << i << " ";
        cout << "\n"; 
    }
    else cout << "-1\n";
}

signed main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}