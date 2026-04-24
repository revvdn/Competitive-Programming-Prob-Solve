/*
Problem: Repetitions
Platform: CSES
Link: https://cses.fi/problemset/task/1069
Difficulty: introductory
Topic: introductory

Approach:
* Iterate through the string and count consecutive identical characters.
* Update the maximum count found.

Time Complexity: O(N)
*/
#include<iostream>
#include<string.h>

//i was put the wrong commit m (actually is 40 but i put 30 XD)
int decay;

int main ()
{
    std::string s; std::cin >> s;
    int n = s.size();
    int cnt = 1, maks = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            cnt += 1;
        }
        else {
            cnt = 1;
        }
        maks = (cnt > maks ? cnt : maks);
    }
    std::cout << maks;
    return 0;
}
