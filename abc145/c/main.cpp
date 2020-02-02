#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

int rinsetu[10];
int x[10];
int y[10];
int n;

double f(int xi, int yi) {
    double x2 = (x[xi] - x[yi]) * (x[xi] - x[yi]);
    double y2 = (y[xi] - y[yi]) * (y[xi] - y[yi]);
    return sqrt(x2 + y2);
}

double length(double len, int town) {
    int i = 0;
    double ans = 0;
    for (i=0; i<n; i++) {
        if (rinsetu[i] == 0) {
            rinsetu[i] = 1;
            ans += length(len + f(town, i), i);
            rinsetu[i] = 0;
        };
    }
    return ans==0 ? len : ans;
}

int nn(int a) {
    int res = 1;
    for (int i=a; i>=1; i--) {
        res *= i;
    }
    return res;
}

int main() {
    cin >> n;
    REP(i, n) {
        cin >> x[i] >> y[i];
    }
    double l[n];
    for (int i=0; i<n; i++) {
        rinsetu[i] = 1;
        l[i] = length(0, i);
        rinsetu[i] = 0;
    }
    double ans = 0;
    double n2 = nn(n);
    for (int i=0; i<n; i++) {
        ans += l[i]/n2;
    }
    printf("%.16lf\n", ans);
    return 0;
}

