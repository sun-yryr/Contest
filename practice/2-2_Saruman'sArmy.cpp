/*
Saruman's Army(POJ No.3069)

N個の点が直線上にあります。点iの位置はXiです。N個のうちのいくつかの点を選び，それらの点に印をつけます。
N個の全ての点について，距離がR以内の場所に印を付けられた点がなければなりません。（自分に印がついていれば，距離が０のところにあると考えます。）
条件を満たすようにしながら，できるだけ印をつける点を少なしたいです。何個の点に印をつける必要があるでしょうか？

<制約>
1 <= N <= 1e3
0 <= R <= 1e3
0 <= Xi <= 1e3
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

int main() {
    int n, r;
    cin >> n >> r;
    int line[n];
    REP(i, n) scanf("%d", &line[i]);
    int counter=0;
    REP(i, n) {
        int left = line[i];
        //現在地から右方向を見て，距離がRの場所を探す
        while(i < n && line[i] <= left + r) ++i;
        int point = line[i-1];
        while(i < n && line[i] <= point + r) ++i;
        --i; ++counter;
    }
    OUT(counter);
    return 0;
}