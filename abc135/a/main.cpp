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
    int a,b;
    cin >> a >> b;
    double ans = (a/2.0+b/2.0);
    if (ceil(ans) == floor(ans)) printf("%d\n", (int)ans);
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}

