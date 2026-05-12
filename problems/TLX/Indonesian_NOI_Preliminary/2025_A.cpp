#include<iostream>
#include<cstring>
#include<algorithm>

const int INF = 1e8;

bool check (char c) {
    if (c == 'O' || c == 'S' || c == 'N') return true;
    return false;
}

int main () {
    std::string s; std::cin >> s;
    int n = s.size();
    int memo[n + 1][2];
    memset(memo, INF, sizeof(memo));
    memo[0][0] = memo[0][1] = 0;
    for (int i = 1; i < n; i++) {
        memo[i][0] = memo[i-1][0] + (check(s[i]) ? 1 : 0);
        memo[i][1] = memo[i-1][1] + (s[i] == 'P' ? 1: 0); 
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int tmp = memo[i][0] + memo[n][1] - memo[i][1];
        ans = std::max(ans, tmp); 
    }
    std::cout << ans;
}