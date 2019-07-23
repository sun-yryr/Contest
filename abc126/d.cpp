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

#define INF 10000
ll MOD = 10e9 + 7;

int main() {
    int n;
    cin >> n;
    int map[n];
    map[0] = 0;
    for(int i=1; i<n; i++) map[i] = INF;
    vector<vector<pair<int, int> > > adjacent_table(n);
    int u,v,w;
    REP(i,n-1) {
      scanf("%d %d %d", &u, &v, &w);
      adjacent_table[u].push_back(make_pair(v, w));
    }
    REP(i,n) {
      int p = adjacent_table[i].size();
      REP(j,p) {
        pair<int, int> tmp = adjacent_table[i][j];
        if(map[tmp.first] == INF) {
          // まだ訪れていない
          map[tmp.first] = (tmp.second % 2 == 0)?map[i]:map[i]^1;
        }
      }
    }
    REP(i,n) printf("%d\n", map[i]);
    return 0;
}