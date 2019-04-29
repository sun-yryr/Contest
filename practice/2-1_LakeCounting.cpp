/*
Lake Counting(POJ No.2386)

大きさがN*Mの庭があります。そこに雨が降り、水溜りができました。
水溜りは8近傍で隣接している場合に繋がっているとみなしたMす。全部で幾つの水溜りがあるでしょうか？

制約 : N, M <= 100
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

char lake[101][101];

void lake_dfs(int i, int j) {
    lake[i][j] = '.';
    //-1, 0, 1のループ
    for(int dx=-1; dx<=1; dx++) {
        for(int dy=-1; dy<=1; dy++) {
            int x = i+dx; int y = j+dy;
            if(0<=x && x<101 && 0<=y && y<101 && lake[x][y] == 'W') lake_dfs(x, y);
        }
    }
}

int main() {
    int n,m,counter = 0;
    char dummy;
    scanf("%d", &n);
    scanf("%d%*[\n]", &m);
    REP(i, n) {
        REP(j, m) {
            scanf("%c", &lake[i][j]);
        }
        getchar();
    }
    REP(i, n) REP(j, m) {
        if(lake[i][j] == 'W') {
            lake_dfs(i, j);
            ++counter;
        }
    }
    OUT(counter);
    return 0;
}