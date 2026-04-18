#include<iostream>

int count (int n) {
    int divider = 5, res = 0;
    while (n / divider >= 1) {
        res += (n / divider);
        divider *= 5;
    }
    return res;
}

int main ()
{
    int n; std::cin >> n;
    std::cout << count(n);
}