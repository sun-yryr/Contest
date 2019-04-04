#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define REP(i,n) for(int (i)=0; i<(n); ++i)
#define COUTL(a) cout << (a) << "\n";
#define COUT(a) cout << (a);

int main() {
    int n,count=0,ma=0;
    string s;
    scanf("%d\n",&n);
    cin >> s;
    REP(i,n) {
        if(s[i]=='I') ++count;
        else if(s[i]=='D') --count;
        ma = max(count,ma);
    }
    COUTL(ma);
}
