#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";
int MOD = 1e9+7;
int prime[1001];
int ooo[1001]={0};

void sieve() {
    prime[0]=prime[1]=1;
    for(int i=2;i<1001;i++) {
        for(int j=2;j<=i;j++) {
            if(i%j==0) {
                prime[i] = j;
                break;
            }
        }
    }
}

void solve(int a) {
    int tmp,c;
    while(a>1) {
        tmp = prime[a];
        c=0;
        while(a%tmp==0) {
            a/=tmp;
            ++c;
        }
        ooo[tmp] += c;
    }
}

int main(int argc, char *argv[]) {
    sieve();
    int n,count=0;
    long long ans=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) solve(i);
    for(int i=1;i<=n;i++) {
        if(ooo[i]) ans = ans*(long long)(ooo[i]+1) % (long long)MOD;
    }
    COUT(ans)
    return 0;
}
