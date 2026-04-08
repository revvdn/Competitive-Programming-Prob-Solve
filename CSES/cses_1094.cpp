#include<iostream>

//i was put the wrong commit m (actually is 40 but i put 30 XD)
int decay;

int main ()
{
    int n; std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) 
            ans += a[i-1] - a[i];
    }
    std::cout << ans;
    return 0;
}