#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;
int match_value[10] = {0, 2, 5 ,5 ,4 ,5 ,6 ,3 ,7 ,6};
int dp[10001];

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> use_match(m);
    REP(i, m) cin >> use_match[i];
    sort(use_match.begin(), use_match.end(), [&](int x, int y) -> int {
        return match_value[x] < match_value[y]; 
    });
    REP(i, n+1) dp[i] = INT_MIN;
    dp[0] = 0;
    for(int i=1; i<=n; i++) {
        REP(j, m) {
            int index = i-match_value[use_match[j]];
            if (index >= 0) dp[i] = max(dp[i], dp[index]+1);
        }
    }
    cout << "print: dp" << endl;
    REP(i, n+1) {
        printf("%d ", dp[i]);
        if (i%10==9) printf("\n");
    }
    string res;
    while(n > 0) {
        REP(i, m) {
            if (dp[n-match_value[use_match[i]]] == (dp[n]-1)) {
                res += to_string(use_match[i]);
                n -= match_value[use_match[i]];
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}

