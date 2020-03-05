#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;

int main() {
    int n, a, b;
    cin >> n;
    auto graph = vector<pair<int, int> >(n);
    auto XL = vector<pair<int, int> >();
    REP(i, n) {
        graph[i].first = 0;
        cin >> a >> b;
        XL.push_back(make_pair(a, b));
    }
    sort(XL.begin(), XL.end());
    REP(i,n) {
        graph[i].second = i;
        int s1 = XL[i].first - XL[i].second;
        int e1 = XL[i].first + XL[i].second;
        for(int j=0; j<n; j++) {
            if (i==j) continue;
            int s2 = XL[j].first - XL[j].second;
            int e2 = XL[j].first + XL[j].second;
            if (e1 <= s2); // not
            else if (s1 >= e2); // not
            else {
                graph[i].first += 1;
            }
        }
    }
    sort(graph.begin(), graph.end(), greater<pair<int, int> >());
    // REP(i, n) {
    //     printf("%d, %d\n", graph[i].first, graph[i].second);
    // }
    int ans = n;
    REP(index, n) {
        if (graph[index].first <= 0) break;
        int i = graph[index].second;
        int s1 = XL[i].first - XL[i].second;
        int e1 = XL[i].first + XL[i].second;
        for(int j=0; j<n; j++) {
            if (i==j) continue;
            int s2 = XL[j].first - XL[j].second;
            int e2 = XL[j].first + XL[j].second;
            if (e1 <= s2); // not
            else if (s1 >= e2); // not
            else {
                graph[i].first = -1;
            }
        }
        ans -= 1;
    }
    cout << ans << endl;
    return 0;
}
