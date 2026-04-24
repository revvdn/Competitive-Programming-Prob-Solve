/*
Problem: Number Spiral
Platform: CSES
Link: https://cses.fi/problemset/task/1071
Difficulty: introductory
Topic: introductory

Approach:
* Find the maximum of X and Y to determine the "layer" of the spiral.
* Calculate the base value (max-1)^2 and add the appropriate offset depending on whether the layer is odd or even.

Time Complexity: O(1) per query
*/
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
