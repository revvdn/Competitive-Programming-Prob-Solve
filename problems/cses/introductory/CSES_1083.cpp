/*
Problem: Missing Number
Platform: CSES
Link: https://cses.fi/problemset/task/1083
Difficulty: introductory
Topic: introductory

Approach:
* Sort the input array.
* Compare with expected numbers from 1 to N.
* The first mismatch is the missing number.

Time Complexity: O(N log N)
*/
#include<iostream>
#include<algorithm>

//i was put the wrong commit m (actually is 40 but i put 30 XD)
int decay;

const int MAXN = 2e5+5;
int pre_num[MAXN];

void precomp() {
    for (int i = 0; i < MAXN; i++) {
        pre_num[i] = i + 1;
    }
}

int main () {
    precomp();
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n-1; i++) {
        std::cin >> a[i];
    }   
    std::sort(a, a + n - 1);
    for (int i = 0; i < n-1; i++) {
        if (a[i] != pre_num[i]) {
            std::cout << i + 1;
            return 0;
        }
    }
    return 0;
}
