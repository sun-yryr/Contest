#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";

int main() {
    string x;
    cin >> x;
    int s,e;
    for(int i=0;i<x.length();i++) if(x[i]=='A') {
        s=i; break;
    }
    for(int i=x.length()-1;i>=0;i--) if(x[i]=='Z') {
        e=i+1; break;
    }
    OUT(e-s)
    return 0;
}