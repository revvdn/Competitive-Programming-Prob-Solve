/*
Problem: Two Knights
Platform: CSES
Link: https://cses.fi/problemset/task/1072
Difficulty: introductory
Topic: introductory

Approach:
* Total ways to place 2 knights on an KxK board is (K^2 * (K^2 - 1)) / 2.
* Number of attacking pairs of knights is 4 * (K-1) * (K-2).
* Subtract attacking pairs from total ways.

Time Complexity: O(N)
*/
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
