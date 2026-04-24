/*
Problem: unknown
Platform: Codeforces
Link: unknown
Difficulty: unknown
Topic: unknown

Approach:
* unknown

Time Complexity: unknown
*/
#include<iostream>
#define max(a, b) (a > b ? a : b) //i rather use this than <algorithm> XD 
//it's the same context but i want chose different path

void solve () {
    int l,a,b; std::cin >> l >> a >> b;
    int i = 0;
    int maks = a;
    while (i < 5000) {
        a = (a+b)%l;
        maks = max(maks, a);
        i++;
    }
    std::cout << maks << "\n";
}

int main () {
    int t; std::cin >> t;
    while (t--) solve();   
    return 0;
}
