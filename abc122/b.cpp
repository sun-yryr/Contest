#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    string s;
    cin >> s;
    int a[11];
    REP(i, s.length()) {
        if(s[i] == 'A') a[i] = 1;
        else if(s[i] == 'T') a[i] = 1;
        else if(s[i] == 'C') a[i] = 1;
        else if(s[i] == 'G') a[i] = 1;
    }
    int m=0,tmp=0;
    REP(i,s.length()) {
        if(a[i]==1) {
            tmp++;
        } else {
            tmp=0;
        }
        m = max(tmp,m);
    }
    cout << m << "\n";
    return 0;
}