/*
Problem: Trailing Zeros
Platform: CSES
Link: https://cses.fi/problemset/task/1618
Difficulty: introductory
Topic: introductory

Approach:
* The number of trailing zeros in N! is the number of times 10 can be formed by factors of 2 and 5.
* Since factors of 2 are more abundant, we only need to count factors of 5 in numbers from 1 to N.
* This is calculated as floor(N/5) + floor(N/25) + floor(N/125) + ...

Time Complexity: O(log5 N)
*/
#include<iostream>

int count (int n) {
    int divider = 5, res = 0;
    while (n / divider >= 1) {
        res += (n / divider);
        divider *= 5;
    }
    return res;
}

int main ()
{
    int n; std::cin >> n;
    std::cout << count(n);
}
