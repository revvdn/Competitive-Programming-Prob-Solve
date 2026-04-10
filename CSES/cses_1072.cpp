#include<iostream>

int main ()
{
    int n; std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int all_pos = (i * i) * (i * i - 1) / 2;
        int attack = (i - 1) * (i - 2) * 2 * 2;
        std::cout << all_pos - attack << "\n";
    }
    return 0; 
}