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
    int a, b;
    cin >> a >> b;
    b--;
    string s;
    cin >> s;
    if(s[b] == 'A') s[b] = 'a';
    else if(s[b] == 'B') s[b] = 'b';
    else if(s[b] == 'C') s[b] = 'c';
    OUT(s);
    return 0;
}