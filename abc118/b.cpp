#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";

int main() {
    int n,m,k,tmp;
    scanf("%d %d\n",&n,&m);
    int ans[m];
    REP(i,m) ans[i] = 0;
    REP(i,n) {
        scanf("%d",&k);
        REP(j,k) {
            scanf("%d",&tmp);
            ans[tmp-1]++;
        }
    }
    int count=0;
    REP(i,m) if(ans[i]==n) count++;
    COUT(count)
}