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
    int n = s.size();

    int ruiseki[n];
    ruiseki[0] = 1;
    for(int i=1; i<n; i++) {
        if (s[i] == s[i-1]) ruiseki[i] = ruiseki[i-1] + 1;
        else ruiseki[i] = 1;
    }
    int rmax = 0;
    for(int i=n-1; i>=0; i--) {
        if (s[i] == 'R') {
            if (rmax == 0) rmax = ruiseki[i] + 1;
            ruiseki[i] = rmax - ruiseki[i];
        } else {
            rmax = 0;
        }
    }


    vector<int> hito(n, 0);
    REP(i, n) {
        hito[i] = i;
        if (ruiseki[i]%2==0) {
            if (s[i] == 'R') {
                hito[i] += ruiseki[i];
            } else {
                hito[i] -= ruiseki[i];
            }
        } else {
            if (s[i] == 'R') {
                hito[i] += ruiseki[i] - 1;
            } else {
                hito[i] -= ruiseki[i] - 1;
            }
        }
        hito[i] = max(0, hito[i]);
        hito[i] = min(n-1, hito[i]);
    }
    vector<int> ans(n, 0);
    REP(i, n) {
        ans[hito[i]]++;
    }
    REP(i, n) {
        printf("%d", ans[i]);
        if(i!=n-1) printf(" ");
    }
    printf("\n");
    return 0;
}

