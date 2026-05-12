#include<bits/stdc++.h>

int main () {
    int n,q; std::cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a, a+n);
    int b[n+5];
    memset(b, sizeof(b), 0);
    //int q; std::cin >> q;
    while (q--) {
        int l,r; std::cin >> l >> r;
        l--; r--;
        b[l]++;
        b[r+1]--;
    }
    std::sort(b, b+n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * b[i];
    }
    std::cout << ans;
    return 0;
}