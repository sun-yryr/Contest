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
    vector<int> a(n);
    int s[2];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if (s[0] <= a[i]) {
            s[1] = s[0];
            s[0] = a[i];
        } else if (s[1] < a[i]) s[1] = a[i];
    }
    for(int i=0; i<n; i++) {
        if (a[i] == s[0]) printf("%d\n", s[1]);
        else printf("%d\n", s[0]);
    }
    return 0;
}

