#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 1e9 + 7;

struct ches
{
    int x;
    int y;
};
ches move1(ches in) {
    ches out;
    out.x = in.x-1;
    out.y = in.y-2;
    return out;
}
ches move2(ches in) {
    ches out;
    out.x = in.x-2;
    out.y = in.y-1;
    return out;
}
ches goal;
ches start;
int dp[100000][100000];

int main() {
    cin >> goal.x >> goal.y;
    start.x = 0;
    start.y = 0;
    dp[0][0] = 1;
    for (int i=1; i<=goal.x; i++) {
        for (int j=1; j<=goal.y; j++) {
            if (i-1 >= 0 && j-2) dp[i][j] += dp[i-1][j-2];
            if (i-2 >= 0 && j-1) dp[i][j] += dp[i-2][j-1];
        }
    }
    cout << dp[goal.x][goal.y] << endl;
    return 0;
}

