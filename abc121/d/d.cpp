#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    unsigned long long n,m;
    long long ans=0;
    scanf("%llu %llu", &n,&m);
    if(n%2==0) {
        if(m%2!=0){
            int tmp = (m-n+1)/2;
            if(tmp%2==0) cout << 0 << "\n";
            else cout << 1 << "\n";
        } else {
            int tmp = (m-n)/2;
            if(tmp%2==0) cout << m << "\n";
            else cout << (1^m) << "\n";
        }
    } else {
        if(m%2==0){
            int tmp = (m-n)/2;
            if(tmp%2==0) cout << (n^m) << "\n";
            else cout << (n^m^1) << "\n";
        } else {
            int tmp = (m-n)/2;
            if(tmp%2==0) cout << n << "\n";
            else cout << (1^n) << "\n";
        }
    }
    return 0;
}
