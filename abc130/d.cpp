#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> A(n);
    vector<ll> cumulative(n+1);
    cumulative[0] = 0;
    REP(i, n) {
        cin >> A[i];
        cumulative[i+1] = cumulative[i] + A[i];
    }
    ll counter = 0;
    for(int i=1; i<=n; i++) {
        auto iter = lower_bound(ALL(cumulative), k+cumulative[i-1]);
        //printf("%lld, %lld\n", k-cumulative[i-1], *iter);
        //cout << (cumulative.end() - iter) << endl;
        counter += (cumulative.end() - iter);
    }
    cout << counter << endl;
    return 0;
}