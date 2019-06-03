#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n";
#define ll long long

const ll MOD = 1e9 + 7;

int main() {
    int n,a,b,c,d;
    string s;
    cin >> n >> a >> b >> c >> d;
    cin >> s;
    s = '#' + s + '#';
    int tmp = 0, rockmax = 0;
    // 岩が連続してなければ移動可能
    for(int i=a; i<=c; i++) {
        if (s[i] == '#') {
            tmp++;
        } else {
            rockmax = max(tmp, rockmax);
            tmp = 0;
        }
    }
    tmp = 0;
    for(int i=b; i<=d; i++) {
        if (s[i] == '#') {
            tmp++;
        } else {
            rockmax = max(tmp, rockmax);
            tmp = 0;
        }
    }
    if (c < d) {
        // 追い抜かない場合
        if (rockmax <= 1) printf("Yes\n");
        else printf("No\n");
    } else {
        // 追い抜く場合（...が必要）
        tmp = 0;
        bool ok = false;
        for(int i=b; i<=d; i++) {
            if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.') {
                ok = true;
            }
        }
        if (ok) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
