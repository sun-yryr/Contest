#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    string s;
    cin >> s;
    REP(i,s.length()) if(s[i] == ',') s[i] = ' ';
    cout << s << "\n";
}
