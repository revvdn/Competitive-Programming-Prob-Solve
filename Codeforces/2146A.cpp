#include<iostream>
#include<algorithm>

void solve () {
    int n; std::cin >> n;
    
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    int a[n + 1] = {0};
    for (int i = 0; i <= n; i++) {
        a[i - 1] += 1; 
    }
    std::sort(a+1, a+n+1);

    int sum = 0;
    for (int i = 1; i <= n; i++) sum += a[i];
 
    int ans = sum;
    for (int i = 1; i <= n; i++) {
        ans = std::min(ans, sum - (n - i) * a[i]);
    }
    std::cout << ans << "\n";
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}