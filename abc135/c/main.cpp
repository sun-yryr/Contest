#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1), b(n);
    REP(i, n+1) cin >> a[i];
    REP(i, n) cin >> b[i];
    ll defeated = 0;
    REP(i, n) {
        int m = min(a[i], b[i]);
        a[i] -= m; b[i] -= m;
        defeated += m;
        m = min(a[i+1], b[i]);
        a[i+1] -= m; b[i] -= m;
        defeated += m;
    }
    printf("%lld\n", defeated);
    return 0;
}

