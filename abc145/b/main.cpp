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
    string s;
    cin >> s;
    if (s.size()%2 != 0) {
        cout << "No" << endl;
        return 0;
    }
    for (int i=0; i<(s.size()/2); i++) {
        if (s[i] != s[i+(s.size()/2)]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

