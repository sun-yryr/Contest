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
    vector<int> a(n+1);
    vector<int> res;
    for(int i=1; i<n+1; i++) cin >> a[i];
    for(int i=n; i>=1; i--) {
        int su = 0;
        for(int j=i; j<n+1; j+=i) su ^= a[j];
        a[i] = su;
        if (su == 1) res.push_back(i);
    }
    n = res.size();
    printf("%d\n", n);
    for(int i=0; i<n; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}

