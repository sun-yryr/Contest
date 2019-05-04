/*
Best Cow Line (POJ No.3617)

N文字の文字列Sが与えられ，N文字の文字列Tを作ります。初めはTは長さ０の文字列で，次のいずれかの操作が行えます。
・Sの先頭を1文字削除し，Tの末尾に追加する
・Sの末尾を1文字削除し，Tの末尾に追加する
辞書順比較でできるだけ小さくなるようにTを作ってください。

<制約>
1 <= N <=2000
文字列Sに含まれるのはローマ字の大文字のみ
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

int main() {
    string s,t = "";
    int n;
    cin >> n;
    cin >> s;
    REP(i, n) {
        if(s[0] < s[n-i-1]) {
            t += s[0];
            s.erase(s.begin());
        } else {
            t += s[n-i-1];
            s.erase(s.end());
        }
    }
    OUT(t);
    return 0;
}