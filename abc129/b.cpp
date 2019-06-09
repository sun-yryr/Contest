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
    int n;
    cin >> n;
    int w[n];
    REP(i,n) scanf("%d", &w[i]);
    int m = 0;
    int mmm = 1000;
    for(int i=1; i<n; i++) {
        int im = 0, jm = 0;
        for(int j=0; j<n; j++) {
            if(j < i) im += w[j];
            else jm += w[j];
        }
        mmm = min(mmm, abs(im-jm));
    }
    OUT(mmm);
    return 0;
}