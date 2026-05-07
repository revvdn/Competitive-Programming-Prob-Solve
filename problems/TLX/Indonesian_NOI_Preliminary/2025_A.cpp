#include <iostream>
#include <cstring>

bool check (char c) {
    if (c == 'O' || c == 'S' || c == 'N') return true;
}

int main () {
    std::string s; std::cin >> s;
    int n = s.size();
    int memo[n + 1][2];
    //memo[i][0] buat ngitung kemunculan O | S | N
    //memo[i][1] buat ngitung kemunculan P
    memset(memo, sizeof(memo), 0);
    if (check(s[0])) memo[0][0] = 1;
    if (s[0] == 'P') memo[0][1] = 1;
    for (int i = 1; i < n; i++) {
        if (check(s[i])) {
            memo[i][0] = memo[i-1][0] + 1; 
        }
        if (s[i] == 'P') {
            memo[i][1] = memo[i-1][1] + 1;
        }
    }
    int ans = -1;
    for (int i = 0; i < n-1; i++) {
        int tmp = memo[i][0] + memo[n][1] - memo[i+1][0];
        ans = (ans < tmp ? tmp : ans);
    }
    std::cout << ans;
    return 0;
}