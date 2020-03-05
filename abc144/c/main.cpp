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
    int start = static_cast<int>(ceil(sqrt(static_cast<double>(n))));
    for (int i=start; i>=1; i--) {
        if (n%i == 0) {
            cout << i+(n/i)-2 << endl;
        }
    }
    return 0;
}

