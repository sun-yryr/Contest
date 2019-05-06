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

int main(int argc, char *argv[]) {
    string line, reverse_line;
    cin >> line;
    reverse_line = line;
    reverse_copy(line.begin(), line.end(), reverse_line.begin());
    OUT(reverse_line);
    OUT(line);
    return 0;
}