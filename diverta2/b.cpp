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

pair<int, int> a[51][51];

int main() {
    int n;
    cin >> n;
    vector<pair<double, pair<int, int> > > xy(n);
    vector<pair<int, pair<int, int> > > ans;
    REP(i, n) {
        scanf("%d %d", &xy[i].second.first, &xy[i].second.second);
        xy[i].first = sqrt(pow(xy[i].second.first, 2) + pow(xy[i].second.second, 2));
    }
    //sort(xy.begin(), xy.end());
    REP(i, n) for(int j=0; j<n; j++) {
        a[i][j].first = xy[j].second.first - xy[i].second.first;
        a[i][j].second = xy[j].second.second - xy[i].second.second;
    }
    REP(i, n) for(int j=0; j<n; j++) {
        int p = 0;
        for(p=0; p<ans.size(); p++) {
            if (a[i][j] == ans[p].second) {
                ans[p].first++;
                break;
            }
        }
        if (p==ans.size() && (a[i][j].first != 0 || a[i][j].second != 0)) {
            ans.push_back(make_pair(1, a[i][j]));
        }
    }
    int m = 0;
    REP(i, ans.size()) {
        m = max(m, ans[i].first);
        //cout << ans[i].first << endl;
    }
    if (n-m <= 0) cout << 1 << endl;
    else cout << n-m << endl;
    return 0;
}