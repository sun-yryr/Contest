#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;
int color[10000][10000];

int main() {
    int n;
    cin >> n;
    vector<vector<int> > rinsetu(n);
    vector<pair<int, int> > input(n);
    int a,b;
    REP(i, n) {
        cin >> a >> b;
        input[i] = make_pair(a, b);
        rinsetu[a].push_back(b);
    }
    int max_color = 0;
    REP(i, n) {
        int size = rinsetu[i].size();
        REP(j, size) {
            
        }
    }
    return 0;
}

