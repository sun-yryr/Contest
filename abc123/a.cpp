#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";
#define ll long long

int main() {
    int a,b,c,d,e,k;
    cin >> a >> b >> c >> d >> e >> k;
    cout << (((e-a)<=k)?"Yay!":":(") << "\n";
    return 0;
}