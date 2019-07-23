#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
ll MOD = 10e9 + 7;

int main() {
    int n,l;
    cin >> n >> l;
    int m = 0;
    int saishou = 10000000;
    int saidai = -10000000;
    int tmp;
    REP(i, n) {
        tmp = l + i;
        saishou = min(saishou, tmp);
        saidai = max(tmp, saidai);
        m += tmp;
    }
    if (saishou <= 0 && 0 <= saidai) {
        OUT(m);
    } else if(0 <= saishou) {
        OUT(m - saishou);
    }
     else if(saidai <= 0) {
         OUT(m - saidai);
    }
    return 0;
}