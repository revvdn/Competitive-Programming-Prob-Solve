/*
Problem: Diagonals
Platform: Codeforces
Link: https://codeforces.com/contest/1995/problem/A
Difficulty: unknown
Topic: greedy

Approach:
* Fill the diagonals of the board starting from the longest ones (the main diagonals) to the shortest ones.
* Calculate how many diagonals are needed to cover at least K cells.

Time Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin >> n >> k;
    int ans = 0;
    bool same = false;
    while (k > 0) {
        k -= n; // 2 
        ans++; // 1
        if (same) {
            same = !same;
        } else {
            n -= 1;
            same = !same;
        }
    }
    cout << ans << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
