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

const int INF = 1e9 + 7;
const ll MOD = 10e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > list = vector<vector<pair<int, int> > >(n, vector<pair<int, int> >());
    int u,v,w;
    REP(i, n-1) {
        scanf("%d %d %d", &u, &v, &w);
        list[u-1].push_back(make_pair(v-1, w%2));
        list[v-1].push_back(make_pair(u-1, w%2));
    }
    stack<int> st;
    vector<int> paint = vector<int>(n, -1);
    int now = 0;
    paint[now] = 0;
    int size = list[now].size();
    REP(i, size) {
        st.push(list[now][i].first);
        paint[list[now][i].first] = list[now][i].second==0?paint[now]:paint[now]^1;
    }
    while(!st.empty()) {
        now = st.top();
        st.pop();
        int size = list[now].size();
        REP(i, size) {
            if (paint[list[now][i].first] != -1) continue;
            st.push(list[now][i].first);
            paint[list[now][i].first] = list[now][i].second==0?paint[now]:paint[now]^1;
        }
    }
    REP(i, n) printf("%d\n", paint[i]);
    return 0;
}