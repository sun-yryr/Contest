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
    vector<tuple<int, int, int> > vec;
    int u,v,w;
    int res[n];
    int size = 0;
    REP(i, n) res[i] = 100;
    REP(i, n-1) {
        scanf("%d %d %d", &u, &v, &w);
        if (res[u-1] != 100 && res[v-1] != 100) {
            continue;
        } else if (res[u-1] != 100) {
            res[v-1] = w%2==0 ? res[u-1] : res[u-1]^1;
        } else if (res[v-1] != 100) {
            res[u-1] = w%2==0 ? res[v-1] : res[v-1]^1;
        } else {
            vec.push_back(make_tuple(u-1, v-1, w));
            size++;
            for(int j=0; j<size-1; j++) {
                if (get<0>(vec[j]) != 100 && get<1>(vec[j]) != 100) {
                    vec.erase(vec.begin() + j);
                    size--;
                    continue;
                } else if (get<0>(vec[j]) != 100) {
                    res[get<1>(vec[j]) != 100] = get<2>(vec[j])%2==0 ? res[get<0>(vec[j])] : res[get<0>(vec[j])]^1;
                    vec.erase(vec.begin() + j);
                    size--;
                } else if (get<1>(vec[j]) != 100) {
                    res[get<0>(vec[j]) != 100] = get<2>(vec[j])%2==0 ? res[get<1>(vec[j])] : res[get<1>(vec[j])]^1;
                    size--;
                    vec.erase(vec.begin() + j);
                }
            }
        }
    }
    for(int j=0; j<size; j++) {
        if (get<0>(vec[j]) != 100 && get<1>(vec[j]) != 100) {
            continue;
        } else if (get<0>(vec[j]) != 100) {
            res[get<1>(vec[j]) != 100] = get<2>(vec[j])%2==0 ? res[get<0>(vec[j])] : res[get<0>(vec[j])]^1;
        } else if (get<1>(vec[j]) != 100) {
            res[get<0>(vec[j]) != 100] = get<2>(vec[j])%2==0 ? res[get<1>(vec[j])] : res[get<1>(vec[j])]^1;
        }
    }
    REP(i, n) {
        printf("%d\n", res[i]);
    }
    return 0;
}