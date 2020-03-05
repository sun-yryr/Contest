#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;

int main() {
    int n,h,w;
    cin >> h >> w >> n;
    cout << ceil(double(n) / double(max(h, w))) << endl;
    return 0;
}
