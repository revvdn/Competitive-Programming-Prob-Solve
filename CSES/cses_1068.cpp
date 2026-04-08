#include<iostream>

int main ()
{
    int n; std::cin >> n;
    while (n != 1) {
        std::cout << n << " ";
        if (n & 1) n = n * 3 + 1;
        else n = n / 2;
    }
    std::cout << 1;
    return 0;
}