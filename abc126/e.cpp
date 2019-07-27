#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

int uf[100001];
int y_rank[100001];

int y_find(int x) {
    while (uf[x] != x) {
        uf[x] = uf[uf[x]];
        x = uf[x];
    }
    return x;
}

bool y_union(int x, int y) {
    int tmp_x = y_find(x);
    int tmp_y = y_find(y);
    if (tmp_x == tmp_y) {
        return false;
    }
    if (y_rank[tmp_x] < y_rank[tmp_y]) {
        swap(tmp_x, tmp_y);
    }
    y_rank[tmp_x] += y_rank[tmp_y];
    uf[tmp_y] = tmp_x;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    REP(i, n) {
        uf[i+1] = i+1;
        y_rank[i+1] = 0;
    }
    REP(i, m) {
        int x,y,trash;
        scanf("%d %d %d", &x, &y, &trash);
        y_union(x, y);
    }
    int counter = 0;
    for(int i=1; i<n+1; i++) {
        if (i == uf[i]) counter++;
    }
    printf("%d\n", counter);
    return 0;
}

