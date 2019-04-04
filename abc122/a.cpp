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
    if(s[0] == 'A') cout << "T";
    else if(s[0] == 'T') cout << "A";
    else if(s[0] == 'C') cout << "G";
    else if(s[0] == 'G') cout << "C";
    return 0;
}