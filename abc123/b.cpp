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

ll update_number(ll a) {
    if(a%10!=0) {
        a += 10 - a%10;
    }
    return a;
}

int main() {
    vector<ll> input,first_num;
    ll tmp;
    REP(i,5) {
        cin >> tmp;
        input.push_back(update_number(tmp));
        first_num.push_back(tmp%10);
    }
    //0以外での最小値を探す
    int min = 1e4;
    REP(i, 5) {
        if(first_num[i]!=0 && min > first_num[i]) min = first_num[i];
    }
    min = (min!=1e4 && min!=0)?10-min:0;
    int ans = 0;
    REP(i, 5) ans += input[i];
    OUT(ans-min);
    return 0;
}