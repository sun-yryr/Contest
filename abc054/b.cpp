#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

vector<string> a, b;
int n,m;

bool ch(int i, int j) {
    bool res = true;
    REP(p, m) {
        REP(q, m) {
            if (a[i+p][j+q] != b[p][q]) res = false;
        }
        if (!res) break;
    }
    return res;
}

int main() {
    cin >> n >> m;
    string input;
    REP(i, n) {
        cin >> input;
        a.push_back(input);
    }
    REP(i, m) {
        cin >> input;
        b.push_back(input);
    }

    bool isok = false;
    for(int i=0; i<(n-m+1); i++) {
        for(int j=0; j<(n-m+1); j++) {
            isok = ch(i, j);
            if (isok) break;
        }
        if (isok) break;
    }
    if (isok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
