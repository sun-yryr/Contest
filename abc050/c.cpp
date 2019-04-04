#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";
int main() {
    long n;
  	long wa = 1000000007;
    scanf("%ld\n",&n);
    long long a[n],b[n];
    REP(i,n) {
        scanf("%lld",&a[i]);
        b[i] = abs(i-(n-1-i));
    }
    sort(a, a+n);
    sort(b,b+n);
    if(n%2==1 && a[0]!=0) {
      COUT(0)
      return 0;
    }
    REP(i,n) if(a[i] != b[i]) {
        COUT(0)
        return 0;
    }
  	int ans=1;
  	REP(i,n/2) {
    	ans *= 2;
    	ans %=wa;
    }
  	COUT(ans);
}