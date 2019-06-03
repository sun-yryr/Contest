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
    int n,k;
    double ans = 0;
    cin >> n >> k;
    double waru = 1.0/(double)n;
  	int nk = n;
    for(int i=1; i<n; i++) {
        int tmp_n = i, count=0;
        while (tmp_n <= k) {
            tmp_n *= 2;
            count++;
        }
        ans += pow(0.5,count);
    }
  	ans *= waru;
    printf("%.16f\n",ans);
    return 0;
}