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
    vector<int> d(n);
    REP(i, n) cin >> d[i];
    sort(d.begin(), d.end());
    int mid_u = n/2;
    int mid_d = mid_u-1;
    cout << d[mid_u] - d[mid_d] << endl;
    return 0;
}
