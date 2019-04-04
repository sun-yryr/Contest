#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int sx,sy,tx,ty;
    scanf("%d %d %d %d\n",&sx,&sy,&tx,&ty);
    string ans;
    REP(i,ty-sy) ans+="U";
    REP(i,tx-sx) ans+="R";
    REP(i,ty-sy) ans+="D";
    REP(i,tx-sx) ans+="L";
    ans+="L";
    REP(i,ty-sy+1) ans+="U";
    REP(i,tx-sx+1) ans+="R";
    ans+="DR";
    REP(i,ty-sy+1) ans+="D";
    REP(i,tx-sx+1) ans+="L";
    ans+="U";
    cout << ans << "\n";
}
