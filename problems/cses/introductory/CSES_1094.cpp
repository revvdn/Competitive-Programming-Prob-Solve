/*
Problem: Increasing Array
Platform: CSES
Link: https://cses.fi/problemset/task/1094
Difficulty: introductory
Topic: introductory

Approach:
* Iterate through the array and ensure each element is at least as large as the previous one.
* If an element is smaller, add the difference to the answer and update the element.

Time Complexity: O(N)
*/
#include<iostream>

//i was put the wrong commit m (actually is 40 but i put 30 XD)
int decay;

int main ()
{
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) 
            ans += a[i-1] - a[i];
    }
    std::cout << ans;
    return 0;
}
