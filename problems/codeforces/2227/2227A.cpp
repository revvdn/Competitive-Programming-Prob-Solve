#include<iostream>

void solve () {
    int x,y; std::cin >> x >> y;
    if ((x&1) & (y&1)) std::cout << "NO";
    else std::cout << "YES";
    std::cout << '\n';
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}