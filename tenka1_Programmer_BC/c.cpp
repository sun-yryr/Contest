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
ll MOD = 10e9 + 7;

int main() {
    int n;
    string s;
  	cin >> n;
    cin >> s;
    int black[n],white[n];
    REP(i, n) {
        if(i==0) black[i] = (s[i]=='#'? 1: 0);
        else if(s[i] == '#') black[i] = black[i-1] + 1;
        else black[i] = black[i-1];
    }
    for(int i=n-1; i>=0; i--) {
        if(i==n-1) white[i] = (s[i]=='.'? 1: 0);
        else if(s[i] == '.') white[i] = white[i+1] + 1;
        else white[i] = white[i+1];
    }
    int min_change = min(n - black[n-1], black[n-1]);
    int tmp_b, tmp_w;
    REP(i, n) {
        tmp_b = black[i];
        tmp_w = white[i+1];
        min_change = min(min_change, tmp_b+tmp_w);
    }
    OUT(min_change);
    return 0;
}