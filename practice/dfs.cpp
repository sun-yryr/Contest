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

int n,k;
int input[1000];

bool dfs(int i, int sum) {
    if(i == n) return sum == k;
    if(dfs(i+1, sum)) return true;
    if(dfs(i+1, sum+input[i])) return true;
    return false;
}

int main() {
    cin >> n;
    REP(i, n) scanf("%d ", &input[i]);
    cin >> k;
    if(dfs(0,0)) {
        OUT("Yes");
    }
    else OUT("No");
    return 0;
}