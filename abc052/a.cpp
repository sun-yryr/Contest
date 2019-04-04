#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define REP(i,n) for(int (i)=0; i<(n); ++i)
#define COUTL(a) cout << (a) << "\n";
#define COUT(a) cout << (a);

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a*b > c*d) COUTL(a*b)
    else COUTL(c*d)
}
