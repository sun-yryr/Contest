#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

int main() {
    double a,b,x;
    cin >> a >> b >> x;
    x /= a;
    double c = (x*2)/b;
    double ans = 0;
    // c > aの時は四角がある
    if (c > a) {
        c = (2*x)/a - b;
        ans = (atan2(b-c, a)/M_PI)*180.0;
    } else {
        ans = (atan2(b, c)/M_PI)*180.0;
    }
    printf("%.16lf\n", ans);
    return 0;
}

