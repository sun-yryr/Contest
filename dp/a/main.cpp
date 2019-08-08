#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;
int dp[100001];

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    REP(i, n) cin >> h[i];
    REP(i, n+1) dp[i] = INT_MAX;
    dp[0] = 0;
    for(int i=0; i<n-1; i++) {
        if (i+2 < n) {
            dp[i+2] = min(dp[i+2], dp[i]+abs(h[i]-h[i+2]));
        }
        if (i+1 < n) {
            dp[i+1] = min(dp[i+1], dp[i]+abs(h[i]-h[i+1]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}
