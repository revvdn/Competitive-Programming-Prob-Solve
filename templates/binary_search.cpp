/*
Binary Search Template
Finds the first index where condition(index) is true.
*/
#include <iostream>
#include <vector>

int binary_search(int low, int high, auto condition) {
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (condition(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
