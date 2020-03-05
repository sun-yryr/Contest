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
    ll n,k,s;
    cin >> n >> k >> s;
    REP(i, n) {
        if (i < k) {
            printf("%lld ", s);
        } else {
            if (s == 1000000000) printf("%lld ", s-1);
            else printf("%lld ", s+1);
        }
    }
    return 0;
}
