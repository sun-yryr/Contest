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
    int n, tmp;
    cin >> n;
    vector<int> in;
    REP(i, n) {
        cin >> tmp;
        in.push_back(tmp);
    }
    sort(in.begin(), in.end());
    for(int i=1; i<n; i++) {
        if (in[i] == in[i-1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

