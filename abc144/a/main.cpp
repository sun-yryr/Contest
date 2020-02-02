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
    int a,b;
    cin >> a >> b;
    if (a >= 1 && a <= 9) {
        if (b >= 1 && b <= 9) {
            cout << a*b << endl;
        } else {
            cout << -1 << endl;
        }
    } else cout << -1 << endl;
    return 0;
}

