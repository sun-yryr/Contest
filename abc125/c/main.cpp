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
    sort(a.begin(), a.end());
    for(int i=a[1]; i>=1; i--) {
        int counter = 0;
        REP(j, n) {
            if (a[j]%i == 0) counter++;
            if (counter-j < 0) break; 
        }
        if (counter >= n-1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

