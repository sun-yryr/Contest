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
    REP(i, n) cin >> a[i];
    bool ok = true;
    for(int i=1; i<n; i++) {
        if (a[i] > a[i-1]) {
            a[i]--;
        } else if (a[i] < a[i-1]) {
            ok = false;
        }
    }
    printf("%s\n", ok?"Yes":"No");
    return 0;
}

