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
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    REP(i, n) cin >> h[i];
    REP(i, n) dp[i] = INT_MAX;
    dp[0] = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=1; j<=k && j+i<n; j++) {
            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}
