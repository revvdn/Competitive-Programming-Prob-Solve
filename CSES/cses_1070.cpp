#include<iostream>

int main ()
{
    int n; std::cin >> n;
    if (n <= 3) {
        std::cout << "NO SOLUTION";
    }
    for (int i = (n%2 ? n : n-1); i > 0 ; i -= 2) {
        std::cout << i << ' ';
    }
    for (int i = (n%2 ? n-1 : n); i > 0 ; i -= 2) {
        std::cout << i << ' ';
    }
    return 0;
}