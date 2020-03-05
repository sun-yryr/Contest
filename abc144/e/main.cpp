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
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> F(n);
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    for(int i=0; i<n; i++) {
        cin >> F[i];
    }
    sort(A.begin(), A.end(), greater<int>());
    sort(F.begin(), F.end());
    while(k > 0) {
        for (int i=1; i<n; i++) {
            for (int j=0; j<=i; j++) {
                if 
            }
            if (A[i] - A[i+1] >= k) {
                k -= A[i] - A[i+1];
                A[i] = A[i+1];
            } 
        }
    }
    return 0;
}

