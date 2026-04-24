/*
Problem: Even Odds
Platform: Codeforces
Link: https://codeforces.com/contest/318/problem/A
Difficulty: unknown
Topic: math

Approach:
* Calculate the boundary between odd and even numbers.
* If the index is within the first half, it's an odd number (2*i - 1).
* Otherwise, it's an even number.

Time Complexity: O(1)
*/
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
