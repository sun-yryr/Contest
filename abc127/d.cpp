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
    int m,n;
    cin >> n >> m;
    vector<long long> a;
    vector<pair<long long, long long> > bc;
 	long long tmp;
    REP(i, n) {
      scanf("%lld", &tmp);
      a.push_back(tmp);
    }
    int b,c;
    REP(i, m) {
        scanf("%lld %lld", &b, &c);
        bc.push_back(make_pair(c,b));
    }
    sort(bc.begin(), bc.end());
    sort(a.begin(), a.end());
    int index = m-1;
    for(int i=0; i<n; i++) {
        //printf("%d %d\n", a[i], bc[index].first);
        if (a[i] < bc[index].first) {
            a[i] = bc[index].first;
            bc[index].second--;
            if (bc[index].second == 0) index--;
        }
    }
    long long ans = 0;
    REP(i, n) {
        ans += a[i];
    }
    printf("%lld\n", ans);
    return 0;
}