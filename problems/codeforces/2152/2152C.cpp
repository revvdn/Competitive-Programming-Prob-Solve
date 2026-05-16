#include<iostream>
#include<cstring>

const int MAXN = 25e4 + 5;
const int INF = 1e8;
int a[MAXN], pref[MAXN], sum[2][MAXN];  

void find() {
    int l,r; std::cin >> l >> r;
    int sum0 = sum[0][r] - sum[0][l-1];
    int sum1 = sum[1][r] - sum[1][l-1];
    if (sum0 % 3 != 0 || sum1 % 3 != 0) {
        std::cout << -1 << '\n';
        return;
    }
    int tmp = pref[r] - pref[l];
    std::cout << sum0/3 + sum1/3 - (bool)(tmp) + 1 << '\n';
}

void solve() {
    memset(a, 0, sizeof(a));
    memset(pref, 0, sizeof(pref));
    memset(sum, 0, sizeof(sum));
    int n,q; std::cin >> n >> q;
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    for (int i = 2; i <= n; i++) {
        pref[i] = pref[i-1] + (a[i] == a[i-1]);
    } 
    for (int i = 1; i <= n; i++) {
        sum[0][i] = sum[0][i-1];
        sum[1][i] = sum[1][i-1];
        if (a[i]) sum[1][i]++;
        else sum[0][i]++;
    }
    while (q--) find();
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}