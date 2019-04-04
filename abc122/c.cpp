#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
int map[100001];

void a(string s, int r) {
    int m=0;
    for(int i=1; i<r; i++) {
        if(s[i-1] == 'A' && s[i] == 'C') m++;
        map[i]=m;
    }
}

int main() {
    map[0]=0;
    string s;
    int n,q;
    scanf("%d %d\n",&n,&q);
    cin >> s;
    a(s,n);
    REP(i,q) {
        int l,r;
        scanf("%d %d\n",&l,&r);
        int ans=0;
        cout << map[r-1]-map[l-1] << "\n";
    }
    return 0;
}