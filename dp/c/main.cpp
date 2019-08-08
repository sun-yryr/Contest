#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;
int dp_a[100001];
int dp_b[100001];
int dp_c[100001];

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    REP(i, n) {
        cin >> a[i] >> b[i] >> c[i];
    }
    dp_a[0] = a[0]; dp_b[0] = b[0]; dp_c[0] = c[0];
    for(int i=1; i<n; i++) {
        dp_a[i] = a[i] + max(dp_b[i-1], dp_c[i-1]);
        dp_b[i] = b[i] + max(dp_a[i-1], dp_c[i-1]);
        dp_c[i] = c[i] + max(dp_b[i-1], dp_a[i-1]);
    }
    int res = max(dp_a[n-1], dp_b[n-1]);
    res = max(res, dp_c[n-1]);
    cout << res << endl;
    return 0;
}
