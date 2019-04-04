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

int main() {
    ll x;
    cin >> x;
    ll ans = (x/11)*2;
    int a = x%11;
    if(a>0 && a<=6) OUT(ans+1)
    else if(a>6) OUT(ans+2)
    else OUT(ans)
    return 0;
}