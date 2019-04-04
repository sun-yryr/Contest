#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
long long MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    long long power = 1;
    for(int i=1; i<=n; i++) {
        power = (power*i) % MOD;
    }
    cout << power << "\n";
    return 0;
}
