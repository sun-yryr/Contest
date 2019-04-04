#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int n,c,m,ans=0;
    scanf("%d %d %d", &n,&m,&c);
    int b[m];
    int a[n][m];
    REP(i,m) scanf("%d",&b[i]);
    REP(i,n) REP(j,m) scanf("%d",&a[i][j]);
    REP(i,n) {
        int tmp =c;
        REP(j,m) {
            tmp+=a[i][j]*b[j];
        }
        if(tmp>0) ans++;
    }
    cout << ans << "\n";
    return 0;
}
