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
    vector<char> a;
    a.push_back(s[0]);
    for(int i=1; i<4; i++) {
        int n = a.size();
        for(int j=0; j<n; j++) {
            if (s[i] == a[j]) break;
            if (j == (n-1)) a.push_back(s[i]);
        }
    }
    printf("%s\n", (a.size()==2)?"Yes":"No");
    return 0;
}
