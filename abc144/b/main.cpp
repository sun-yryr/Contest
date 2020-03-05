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
    for (int i=1; i<=9; i++) {
        if (n%i == 0) {
            if (n/i >= 1 && n/i <= 9) {
                cout << "Yes" << endl;
                break;
            }
        }
        if (i==9) {
            cout << "No" << endl;
        }
    }
    return 0;
}

