#include<iostream>
#define ll long long 

void solve()
{
    int x,y; std::cin >> x >> y;
    if (y > x) {
        ll ans = (ll)(y - 1) * (ll)(y - 1);
        ll add = 0;
        if (y&1) 
            add = x;
        else 
            add = 2 * y - x;
            std::cout << ans + add << "\n";
    }
    else {
        ll ans = (ll)(x-1) * (ll)(x-1);
        ll add = 0;
        if (!x&1) {
            add = (ll)y;
        }
        std::cout << ans + add << "\n";
    }
}

int main ()
{
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}