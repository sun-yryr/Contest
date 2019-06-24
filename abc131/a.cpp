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
    string s;
    cin >> s;
    REP(i, 3) {
        if(s[i] == s[i+1]) {
            OUT("Bad");
            return 0;
        }
    }
    OUT("Good");
    return 0;
}