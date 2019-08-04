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
    int counter = 0;
    for(int i=1; i<=n; i++) {
        int l = log10(i);
        l++;
        if (l%2!=0) counter++;
    }
    cout << counter << endl;
    return 0;
}

