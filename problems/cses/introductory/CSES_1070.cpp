/*
Problem: Permutations
Platform: CSES
Link: https://cses.fi/problemset/task/1070
Difficulty: introductory
Topic: introductory

Approach:
* Print odd numbers in descending order, then even numbers in descending order.
* Handle cases where no solution exists (N=2, 3).

Time Complexity: O(N)
*/
#include<iostream>

//i was put the wrong commit m (actually is 40 but i put 30 XD)
int decay;

int main ()
{
    int n; std::cin >> n;
    if (n <= 3) {
        std::cout << "NO SOLUTION";
    }
    for (int i = (n%2 ? n : n-1); i > 0 ; i -= 2) {
        std::cout << i << ' ';
    }
    for (int i = (n%2 ? n-1 : n); i > 0 ; i -= 2) {
        std::cout << i << ' ';
    }
    return 0;
}
