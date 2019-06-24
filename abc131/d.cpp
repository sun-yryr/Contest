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
    int n;
    cin >> n;
    vector<pair<ll, ll> > ab(n);
    REP(i, n) scanf("%lld %lld", &ab[i].second, &ab[i].first);
    sort(ab.begin(), ab.end());
    ll time = 0;
    REP(i, n) {
        time += ab[i].second;
        if (time > ab[i].first) {
            OUT("No");
            return 0;
        }
    }
    OUT("Yes");
    return 0;
}