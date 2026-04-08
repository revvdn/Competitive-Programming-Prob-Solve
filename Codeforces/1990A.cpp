#include <bits/stdc++.h>
using namespace std;

map<int, int> cnt;

void solve() 
{
    cnt.clear();
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    for (auto i : cnt) {
        if (i.second%2 == 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}