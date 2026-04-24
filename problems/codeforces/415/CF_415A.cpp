/*
Problem: Mashmokh and Lights
Platform: Codeforces
Link: https://codeforces.com/contest/415/problem/A
Difficulty: unknown
Topic: implementation

Approach:
* For each button pressed, turn off all lights from that position to the end of the corridor.
* Record which button turned off each light.

Time Complexity: O(N*M)
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m; cin >> n >> m;
    bool track[n+5];
    memset(track, true, sizeof(track));
    int ans[n+5];
    while (m--) {
        int x; cin >> x;
        for (int i = x; i<=n; i++) {
            if (track[i]) {
                ans[i] = x;
                track[i] = false;
            }
        }
    }
    for (int i=1; i<=n; i++) cout << ans[i] << " ";
    return 0;
}
