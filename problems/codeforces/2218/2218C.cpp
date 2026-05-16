#include<iostream>

void solve() {
    int n; std::cin >> n;
    int tmp = 3*n;
    for (int i = 1; i <= n; i++) {
        std::cout << i << ' ';
        std::cout << tmp - 1 << ' ' << tmp << ' ';
        tmp -= 2;
    } 
    std::cout << '\n';
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}