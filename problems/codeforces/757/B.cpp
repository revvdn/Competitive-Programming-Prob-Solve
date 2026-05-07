#include<iostream>
#include<map>
#include<algorithm>

int main () {
    int n; std::cin >> n;
    std::map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        if (x != 1) freq[x]++;
        for (int i = 2; i*i <= x; i++) {
            if (x % i == 0) {
                freq[i]++;
                if (x / i != i) freq[x/i]++;
            }
        }
    }
    auto maks = std::max_element(freq.begin(), freq.end(), [](const std::pair<int,int> &a, const std::pair<int,int> &b){ 
        return a.second < b.second;
    });
    std::cout << freq[1];
    //std::cout << std::max(maks->second, 1) << "\n";
    return 0;
}