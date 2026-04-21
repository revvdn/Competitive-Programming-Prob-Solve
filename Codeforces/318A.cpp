#include<iostream>
#define ll long long

int main () {
    int a,n; std::cin >> a >> n;
    if (a <= n/2 + (n%2)) {
        std::cout << (2 * a - 1);
    }
    else {
        std::cout << 2 * (a - (n / 2 + n % 2));
    }
    return 0;
}