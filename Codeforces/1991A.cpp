#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n; cin >> n;
    int maks = 0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        if (i%2 == 0 && (n-i-1)%2 == 0) {
            maks = max(maks, x);
        }
    }
    cout << maks << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}