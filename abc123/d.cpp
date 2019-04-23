#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";
#define ll long long

const ll MOD = 1e9 + 7;

int main() {
    int x,y,z,k;
    cin >> x >> y >> z >> k;
    ll a[1000], b[1000], c[1000], ans[k]={0};
    REP(i, x) scanf("%lld ", &a[i]);
    REP(i, y) scanf("%lld ", &b[i]);
    REP(i, z) scanf("%lld ", &c[i]);
    ll tmp;
    REP(i, x) REP(j,y) REP(m, z) {
        tmp = a[i] + b[j] + c[m];
        ans[k-1] = max(ans[k-1], tmp);
        sort(ans, ans+k, greater<ll>());
    }
    REP(i,k) printf("%lld\n", ans[i]);
    return 0;
}