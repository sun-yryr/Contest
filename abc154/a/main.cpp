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
    string s,t,u;
    int a,b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    if (s==u) {
        cout << a-1+b << endl;
        return 0;
    } else {
        cout << a+b-1 << endl;
        return 0;
    }
    return 0;
}

