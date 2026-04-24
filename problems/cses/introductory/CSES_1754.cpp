/*
Problem: Coin Piles
Platform: CSES
Link: https://cses.fi/problemset/task/1754
Difficulty: introductory
Topic: introductory

Approach:
* Let x be the number of times we take 2 coins from pile A and 1 from pile B.
* Let y be the number of times we take 1 coin from pile A and 2 from pile B.
* We have: 2x + y = A and x + 2y = B.
* Solving for x and y: x = (2A - B) / 3, y = (2B - A) / 3.
* A solution exists if x and y are non-negative integers.

Time Complexity: O(1) per query
*/
#include<iostream>

void solve() {
    int a, b; std::cin >> a >> b;
    if ((2 * a - b) % 3 || (2 * a - b) < 0 || (2 * b - a) % 3 || (2 * b - a) < 0) {
        std::cout << "NO\n";
    }
    else {
        std::cout << "YES\n";
    }
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();
    return 0;
}
