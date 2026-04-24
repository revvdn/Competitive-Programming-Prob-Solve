/*
Problem: Two Sets
Platform: CSES
Link: https://cses.fi/problemset/task/1092
Difficulty: introductory
Topic: introductory

Approach:
* Calculate the total sum of numbers from 1 to N.
* If the sum is odd, it's impossible to divide into two equal sets.
* Use a greedy approach to fill the first set until its sum reaches half of the total sum.

Time Complexity: O(N)
*/
#include<iostream>
#include<vector>
#define ll long long

int main ()
{
    int n; std::cin >> n;
    
    ll sum = (ll)n * (ll)(n + 1) / 2;
    ll par_sum = sum / 2;
    
    if (par_sum * 2 != sum) {
        std::cout << "NO";
        return 0;
    }
    else {
        std::vector<int> set1, set2;
        bool vis[n] = {false};

        for (int i=n; i>=1; i--) {
            if (i <= par_sum) {
                set1.push_back(i);
                par_sum -= i;
                vis[i] = true;
            }
        }

        for (int i = n; i >= 1; i--) {
            if (!vis[i]) {
                set2.push_back(i);
            }
        }

        std::cout << "YES\n" << set1.size() << "\n";
        for (auto i : set1) {
            std::cout << i << " ";
        }
        std::cout << "\n" << set2.size() << "\n";
        for (auto i : set2) {
            std::cout << i << " ";
        }
    }
    return 0;
}
