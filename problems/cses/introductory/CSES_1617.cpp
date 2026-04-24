/*
Problem: Bit Strings
Platform: CSES
Link: https://cses.fi/problemset/task/1617
Difficulty: introductory
Topic: introductory

Approach:
* Calculate 2^N modulo 10^9 + 7 using modular exponentiation.

Time Complexity: O(log N)
*/
#include<iostream>
#define ll long long

const int MOD = 1e9 + 7;

ll power_mod (ll a, ll b) {
    ll res = 1;
    while (b >= 1) {
        if (b&1) {
            res = (res * a) % MOD;
            b--;
        }
        else {
            a = (a * a) % MOD;
            b /= 2;
        }
    }
    return res;
}

int main ()
{
    ll n; std::cin >> n;
    std::cout << power_mod(2, n);
}
