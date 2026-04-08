#include<iostream>
#include<string.h>

int main ()
{
    std::string s; std::cin >> s;
    int n = s.size();
    int cnt = 1, maks = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            cnt += 1;
        }
        else {
            cnt = 1;
        }
        maks = (cnt > maks ? cnt : maks);
    }
    std::cout << maks;
    return 0;
}