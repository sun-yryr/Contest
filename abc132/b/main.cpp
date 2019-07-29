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
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    int counter = 0;
    for(int i=1; i<n-1; i++) {
        int min_v = min(min(p[i-1], p[i]), p[i+1]);
        int max_v = max(max(p[i-1], p[i]), p[i+1]);
        if (min_v != p[i] && max_v != p[i]) counter++;
    }
    cout << counter << endl;
    return 0;
}
