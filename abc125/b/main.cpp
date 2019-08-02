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
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    REP(i, n) cin >> v[i];
    REP(i, n) cin >> c[i];
    int xy = 0;
    REP(i, n) {
        if (v[i]-c[i] > 0) xy += v[i]-c[i];
    }
    cout << xy << endl;
    return 0;
}

