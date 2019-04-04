#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";

int main() {
    int n,tmp;
    scanf("%d\n",&n);
    int a[n];
    REP(i,n) scanf("%d",&a[i]);
    sort(a,a+n);
    int min = 1000000;
    int index=0;
    while(index+1!=n){
        for(int i=index+1;i<n;i++) {
            tmp = a[i]%a[index];
            a[i] = tmp;
        }
        sort(a,a+n);
        REP(i,n) if(a[i]!=0) {
            index=i;
            break;
        }
    }
    COUT(a[n-1])
}