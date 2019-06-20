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
    int n,k;
    cin >> n >> k;
    int tmp = n - k;
    if (tmp > 0 && k != 1) printf("%d\n",tmp);
    else printf("0\n");
    return 0;
}