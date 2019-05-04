/*
Fence Repair(POJ No.3253)

農夫ジョンは，フェンスを修理するため，とても長い板からN個の板を切り出そうとしています。
切り出そうとシエル板の長さはL1,L2,,,,,Lnであり，元の板の長さはちょうどこれの合計になっています。
板を切断する際には，この板の長さの分だけコストがかかります。例えば，長さ21の板から長さ5,8,8の3つの板を切り出したいとします。
長さ21の板を13と8の板に切断すると，コストが21かかります。その13の板を5と8の板に切断すると，コストが13かかります。
合計で34のコストがかかります。最小で，どれだけのコストで全ての板を切り出すことができるでしょうか。


<制約>
1 <= N <= 20000
1 <= Li <= 50000
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

int n;
ll l[20001];

int nibun() {
    ll ans = 0;
    while(n > 1) {
        ll t = l[n-1] + l[n-2];
        ans += t;
        n--;
        l[n-1] = t;
        //sort(l, l+n, greater<int>());
        int lim = n-1;
        for(int i=n-2; i>=0; i--) {
            if(l[i] < l[lim]) {
                swap(l[i], l[lim]);
                lim = i;
            }
        }
    }
    return ans;
}

int main() {
    cin >> n;
    REP(i, n) scanf("%lld", &l[i]);
    sort(l, l+n, greater<int>());
    ll ans = nibun();
    OUT(ans);
    return 0;
}