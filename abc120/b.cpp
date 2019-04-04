#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
//long long dp[100000][100000]={0};

int main() {
    int a,b,k;
    int count =0;
    scanf("%d %d %d",&a,&b,&k);
    int an[101]={0},bn[101]={0};
    for(int i=1;i<=sqrt(a);i++) {
        if(i<=sqrt(a) && a%i==0) {
            an[i] = i;
          	if(i!=sqrt(a)) an[101-i] = a/i;
        }
    }
    for(int i=1;i<=sqrt(b);i++) {
        if(i<=sqrt(b) && b%i==0) {
            bn[i] = i;
            if(i!=sqrt(b)) bn[101-i] = b/i;
        }
    }
    sort(an,an+101);
    sort(bn,bn+101);
  	//REP(i,101) cout << an[i] << " ";
    for(int i=100;i>=0;i--) {
        for(int j=100;j>=0;j--) {
            if(an[i] == bn[j]) {
                count++;
                if(count == k) {
                    printf("%d\n",an[i]);
                    return 0;
                }
                break;
            }
        }
    }

}
