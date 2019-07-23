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
ll max_kouyaku(ll a, ll b) {
    if (a<b) {
        swap(a, b);
    }
    ll r = a%b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
ll min_koubai(ll a, ll b) {
    ll ab = max_kouyaku(a, b);
    return (a*b)/ab;
}

int main() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll cd = min_koubai(c, d);
    ll a_waru = (a-1)/c;
    a_waru += (a-1)/d;
    a_waru -= (a-1)/cd;

    ll b_waru = b/c;
    b_waru += b/d;
    b_waru -= b/cd;

    ll ans = (b-a+1)-(b_waru-a_waru);
    OUT(ans);
    return 0;
}