/*
Problem: Weird Algorithm
Platform: CSES
Link: https://cses.fi/problemset/task/1068
Difficulty: introductory
Topic: introductory

Approach:
* Apply the collatz conjecture: if n is even, divide by 2, else multiply by 3 and add 1.
* Repeat until n is 1.

Time Complexity: unknown
*/
#include<iostream>

int main ()
{
    int n; std::cin >> n;
    while (n != 1) {
        std::cout << n << " ";
        if (n & 1) n = n * 3 + 1;
        else n = n / 2;
    }
    std::cout << 1;
    return 0;
}
