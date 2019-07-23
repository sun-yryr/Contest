#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
ll MOD = 10e9 + 7;

int main() {
    ll H,W,x,y;
    cin >> W >> H >> x >> y;
    // たて
    double tate = H * min(W-x, x);

    // 横
    double yoko = W * min(H-y, y);

    if ((y == 0 || y == H) || (x == 0 || x == W)) {
        printf("%.16lf %d\n", (max(W,H)/2.0)*min(W,H), 0);
    } else if (tate == yoko) {
        printf("%.16lf %d\n", (max(W,H)/2.0)*min(W,H), 1);
    } else {
        printf("%.16lf %d\n", (max(W,H)/2.0)*min(W,H), 0);
    }
    return 0;
}