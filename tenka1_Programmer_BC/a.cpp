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
ll MOD = 10e9 + 7;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if ( max(a,b) >= c && min(a,b) <= c) {
      OUT("Yes");
    }
    else OUT("No");
    return 0;
}
