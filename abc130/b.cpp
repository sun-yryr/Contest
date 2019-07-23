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
ll MOD = 10e9 + 7;

int main() {
    int n,x;
    cin >> n >> x;
    int l[n];
    REP(i, n) scanf("%d ", &l[i]);
    int zahyo = 0, count = 1;
    for(int i=0; i<n; i++) {
        zahyo += l[i];
        if (zahyo <= x) {
            count++;
            //printf("%d %d\n", zahyo, count);
        }
    }
    OUT(count);
    return 0;
}