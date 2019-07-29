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
    vector<int> p(n), old_p(n);
    REP(i, n) cin >> p[i];
    copy(p.begin(), p.end(), old_p.begin());
    sort(p.begin(), p.end());
    int counter = 0;
    REP(i, n) if (p[i] != old_p[i]) counter++;
    if (counter == 0 || counter == 2) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}

