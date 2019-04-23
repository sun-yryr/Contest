#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long

int main() {
    ll n;
    vector<ll> a(5);
    cin >> n;
    REP(i,5) cin >> a[i];
    ll Min = *min_element(a.begin(), a.end());
    ll ans = (n+Min-1)/Min + 4;
    OUT(ans);
    return 0;
}