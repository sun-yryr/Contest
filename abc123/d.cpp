#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(x) (x).begin(), (x).end()
#define OUT(a) cout << (a) << "\n"

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll MOD = 10e9 + 7;
int lists[1000][1000];

struct cake {
    ll cost;
    int i;
    int j;
    bool operator<(const cake& key) const {
        return this->cost < key.cost;
    }
};
cake make_cake(ll c, int ii, int jj) {
    cake a;
    a.cost = c; a.i = ii, a.j = jj;
    return a;
}

int main() {
    int x,y,z,k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x), b(y), c(z);
    REP(i, x) scanf("%lld", &a[i]);
    REP(i, y) scanf("%lld", &b[i]);
    REP(i, z) scanf("%lld", &c[i]);
    sort(ALL(a));
    sort(ALL(b));
    sort(ALL(c), greater<ll>());

    priority_queue<cake> q;
    REP(i, x) REP(j, y) {
        lists[i][j] = 1;
        q.push(make_cake(a[i]+b[j]+c[0], i, j));
    }
    REP(p, k) {
        cake tmp = q.top();
        q.pop();
        int i = tmp.i;
        int j = tmp.j;
        printf("%lld\n", tmp.cost);
        
        if (lists[i][j] < z) {
            q.push(make_cake(a[i]+b[j]+c[lists[i][j]], i, j));
            lists[i][j]++;
        }
    }
    return 0;
}