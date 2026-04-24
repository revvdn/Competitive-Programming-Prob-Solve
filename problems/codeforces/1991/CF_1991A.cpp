/*
Problem: Maximize the Last Element
Platform: Codeforces
Link: https://codeforces.com/contest/1991/problem/A
Difficulty: unknown
Topic: greedy

Approach:
* The last element can only be one of the elements at even indices (0-indexed).
* We iterate through these elements and pick the maximum.

Time Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n; cin >> n;
    int maks = 0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        if (i%2 == 0 && (n-i-1)%2 == 0) {
            maks = max(maks, x);
        }
    }
    cout << maks << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
