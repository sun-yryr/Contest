#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";

int main() {
    int n,m;
    scanf("%d %d\n",&n,&m);
    if(m%n==0) COUT(n+m)
    else COUT(m-n)
}