#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

const int MAXN = 1e5 + 5;
int a[MAXN];

int main () {
    int n; std::cin >> n;
    memset(a, sizeof(a), 0);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        a[x]++;
    }
    for (int i = 1; i < MAXN; i++) {
        a[i] = a[i-1] + a[i];
    }
    int q; std::cin >> q;
    while (q--) {
        int x; std::cin >> x;
        std::cout << a[x] << '\n';
    }
    return 0;
}
