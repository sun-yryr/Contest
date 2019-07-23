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
    int p,q,r;
    cin >> p >> q >> r;
    int m = min(p+q, p+r);
    m = min(m, q+r);
    OUT(m);
    return 0;
}