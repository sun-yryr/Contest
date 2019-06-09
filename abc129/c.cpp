#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
ll MOD = 10e8 + 7;

int main() {
    int n,m;
    cin >> n >> m;
    int fib[n];
    int a[m+2];
    REP(i, m) {
        scanf("%d", &a[i]);
        a[i]--;
    }
    if (m<1) {
        a[0] = -1;
        a[1] = -1;
    } else if (m<2) {
        a[1] = -1;
    }
    int a_index = 0;
    if (a[0] == 0) {
        // 1だんめ死
        fib[0] = 0;
        a_index++;
        if (a[1] == 1) {
            // 1だんめも2だんめも死
            fib[1] = 0;
            a_index++;
        } else {
            fib[1] = 1;
        }
    } else if (a[0] == 1) {
        fib[0] = 1;
        fib[1] = 0;
        a_index++;
    } else {
        fib[0] = 1;
        fib[1] = 2;
    }
    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        if(a[a_index] == i) {
            fib[i] = 0;
            if(a_index != m) a_index++;
        } else {
            fib[i] = fib[i] % MOD;
        }
    }
    OUT(fib[n-1]);
    return 0;
}

/*
1 -> 1
2 -> 2
3 -> 0
4 -> 2
5 -> 2
6 -> 4
fibなので
*/