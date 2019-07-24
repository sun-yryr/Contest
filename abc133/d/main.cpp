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
    vector<int> A(n);
    vector<int> ans(n);
    ans[0] = 0;
    REP(i, n) {
        cin >> A[i];
        ans[0] += A[i];
    }
    for(int i=1; i<n; i+=2) ans[0] -= 2*A[i];
    for(int i=1; i<n; i++) {
        ans[i] = 2*A[i-1] - ans[i-1];
    }
    REP(i, n) printf("%d ", ans[i]);
    printf("\n");
    return 0;
}

