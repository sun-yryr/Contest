#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int n,m;
    long long ans=0;
    int tmp1,tmp2;
    scanf("%d %d", &n,&m);
    vector<pair<int,int> > pa;
    REP(i,n) {
        scanf("%d %d",&tmp1,&tmp2);
        pa.push_back(make_pair(tmp1,tmp2));
    }
    sort(pa.begin(), pa.end());
    REP(i,n) {
        while(pa[i].second!=0){
            ans+=pa[i].first;
            pa[i].second--;
            m--;
            if(m==0) {
                cout << ans << "\n";
                return 0;
            }
        }
    }
    return 0;
}
