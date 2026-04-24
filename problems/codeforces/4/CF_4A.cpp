/*
Problem: Watermelon
Platform: Codeforces
Link: https://codeforces.com/contest/4/problem/A
Difficulty: unknown
Topic: greedy

Approach:
* A watermelon can be divided into two even parts if its weight is even and greater than 2.

Time Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin>>n;
    if (n>2 && n%2 ==0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
