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
    int yy,mm;
    bool yymm = false, mmyy = false;
    scanf("%2d%2d", &yy, &mm);
    if (0 <= yy  && 1 <= mm && mm <= 12) yymm = true;
    if (0 <= mm  && 1 <= yy && yy <= 12) mmyy = true;
    if (yymm && mmyy) OUT("AMBIGUOUS");
    else if(yymm) OUT("YYMM");
    else if(mmyy) OUT("MMYY");
    else OUT("NA");
    return 0;
}