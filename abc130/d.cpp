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
    ll n,k;
    cin >> n >> k;
    ll a;
    ll dp[n+1];
    dp[0] =0;
    REP(i, n) {
        scanf("%lld", &a);
        dp[i+1] = dp[i] + a;
    }
    ll count = 0;
    ll tmp = 0;
    REP(i, n+1) {
        for(int j=i; j<n+1; j++) {
            if (dp[j]-dp[i] >= k) {
                count += (n-j+1);
                tmp = 0;
                break;
            }
        }
    }
    OUT(count);
    return 0;
}