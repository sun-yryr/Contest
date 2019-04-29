#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";
#define ll long long
ll MOD = 10e9 + 7;

int fib(int a) {
    if(a <= 0) return 1;
    return fib(a-1) + fib(a-2);
}

int fib2(int a) {
    int old = 1,now = 1;
    REP(i, a) {
        int tmp = now;
        now += old;
        old = tmp;
    }
    return now;
}

int main() {
    OUT(fib2(10));
    return 0;
}