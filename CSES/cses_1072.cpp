#include<iostream>
#define ll long long

int main ()
{
    int n; std::cin >> n;
    for (int i = 1; i <= n; i++) {
        ll all_pos = (ll)(i * i) * (ll)(i * i - 1) / 2;
        ll attack = (ll)(i - 1) * (ll)(i - 2) * 2 * 2;
        std::cout << all_pos - attack << "\n";
    }
    return 0; 
}