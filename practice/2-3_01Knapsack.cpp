/*
01 Knapsack

重さと価値がそれぞれw, vであるようなn個の品物があります。
これらの品物から，重さの総和がWを超えないように選んだ時の，価値の総和の最大を求めなさい。


<制約>
1 <= N <= 100
1 <= w, v <= 100
1 <= W <= 10000
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";
#define ll long long
ll MOD = 10e9 + 7;

int n, w;
vector<pair<int, int> > nap;
int dp[101][101];

int rec(int i, int j) {
    int res;
    if(i == n) {
        res = 0;
    } else if(j < nap[i].first) {
        res = rec(i+1, j);
    } else {
        res = max(rec(i+1, j-nap[i].first) + nap[i].second, rec(i+1, j));
    }
    return res;
}

int rec_dp(int i, int j) {
    int res;
    if(i == n) {
        res = 0;
    } else if(dp[i][j] != 0) {
        res = dp[i][j];
    } else if(j < nap[i].first) {
        dp[i][j] = rec(i+1, j);
        res = dp[i][j];
    } else {
        dp[i][j] = max(rec(i+1, j-nap[i].first) + nap[i].second, rec(i+1, j));
        res = dp[i][j];
    }
    return res;
}

int main() {
    int weight,v;
    cin >> n;
    REP(i, n) {
        scanf("%d %d", &weight, &v);
        nap.push_back(make_pair(weight,v));
    }
    cin >> w;
    OUT(rec(0, w));
    //OUT(rec_dp(0,w)); 
    return 0;
}