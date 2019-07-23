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
    ll L,R;
    cin >> L >> R;
    // r - l 2019以上
    ll mins = 2019;
    if ((R - L) >= 2019) mins = 0;
    else {
        for(ll i=L; i<R; i++) {
            for(ll j=i+1; j<R+1; j++) {
                mins = min(mins, (i*j)%2019);
            }
        }
    }
    cout << mins << endl;
    return 0;
}
