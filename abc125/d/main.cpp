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
    vector<int> a(n);
    int counter = 0;
    ll sum = 0;
    int minimum = INT_MAX;
    REP(i, n) {
        cin >> a[i];
        counter ^= (a[i]<0)?1:0;
        minimum = min(minimum, abs(a[i]));
        sum += abs(a[i]);
    }
    if (counter == 1) {
        sum -= minimum*2;
    }
    cout << sum << endl;
    return 0;
}

