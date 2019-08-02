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
    int a[n];
    REP(i, n) cin >> a[i];
    int bug = 0, parameter = 0;
    REP(i, n) {
        if (a[i] != 0) {
            bug += a[i];
            parameter++;
        }
    }
    printf("%d\n", (bug+parameter-1)/parameter);
    return 0;
}

