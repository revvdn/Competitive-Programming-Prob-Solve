#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

int main () {
    int n,k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::vector<std::pair<int, int>> track;
    bool consec = false;
    int first, last;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            if (!consec) first = i+1;
        }
        else {
            last = i;
            consec = !consec;
            track.push_back({first, last});
        }
        
    }
    if (track.empty()) {
        std::cout << n;
        return 0;
    }
    std::vector<int> b;
    for (int i = 1; i < track.size(); i++) {
        int size = track[i].first - track[i-1].second;
        b.push_back(size);
    }
    std::sort(b.rbegin(), b.rend());
    int ans = 0;
    for (int i = 0; i < std::min(k-1, b.size()); i++) {
        ans += b[i];
    }
    std::cout << ans + (n - track.back().second - track.front().first + 1);
    return 0;
}