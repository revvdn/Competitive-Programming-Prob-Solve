#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
int table[MAXN][30];

int main ()
{
    int n,q; cin >> n >> q;
    for (int i=1; i<=n; i++) {
        cin >> table[i][0];
    }
    for (int i=1; i<=30; i++) {
        for (int j=1; j<=n; i++) {
            table[i][j] = table[table[i][j-1]][j-1];
        }
    }
    while (q--) {
        int a, x; cin >> a >> x;
        for (int i=0; i<30; i++) {
            if ((x >> i) & 1) {
                a = table[a][i];
            }
        }
        cout << a << "\n";
    }
    return 0;
}