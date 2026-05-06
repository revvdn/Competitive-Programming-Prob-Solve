#include<stdio.h>

int main () {
    int n, x; scanf("%d %d", &n, &x);
    int tmp; (x != 1 ? scanf("%d", &tmp) : 0);
    for (int i = 1; i < n; i++) {
        int a; scanf("%d", &a);
        if (a <= tmp) {
            printf("%d",0);
            return 0;
        }
    }
    printf("%d",1);
    return 0;
}