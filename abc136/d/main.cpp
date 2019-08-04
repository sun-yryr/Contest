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
    
    int move_max = 1;
    int counter = 1;
    char co = s[0];
    for(int i=1; i<n; i++) {
        if (s[i] == co) counter++;
        else {
            co = s[i];
            move_max = max(move_max, counter);
            counter = 1;
        }
    }
    move_max = max(move_max, counter);
    if (move_max%2==1) move_max++;


    int ruiseki[n];
    ruiseki[0] == 1;
    for(int i=1; i<n; i++) {
        if (s[i] == s[i-1]) ruiseki[i] = ruiseki[i-1] + 1;
        else ruiseki[i] = ruiseki[i-1];
    }
    int rmax = 0;
    for(int i=n-1; i>=0; i--) {
        if (s[i] == 'R') {
            if (rmax == 0) rmax = ruiseki[i] + 1;
            ruiseki[i] = rmax - ruiseki[i];
        }
    }


    vector<int> hito(n, 1);
    REP(i, move_max) {
        REP(j, n) {
            if (hito[j] == 0) continue;
            if (s[j] == 'R') 
        }
    }
    return 0;
}

