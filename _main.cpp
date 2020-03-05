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
    string s;
    cin >> s;
    int n = s.size(), ans = n, len = 1;
    string save;
    int i=0;
    while(i+len<n) {
        //cout << i << " " << len << " " << save << " " << s.substr(i, len) << endl;
        if (save != s.substr(i, len)) {
            save = s.substr(i, len);
            i += len;
            len = 1;
        } else {
            len++;
            ans--;
        }
    }
    if (save != s.substr(i, len)) {
            save = s.substr(i, len);
            i += len;
            len = 1;
        } else {
            len++;
            ans--;
        }
    cout << ans << endl;
    return 0;
}

