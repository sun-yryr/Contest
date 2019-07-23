#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

int main() {
    int n,d;
    cin >> n >> d;
    vector<vector<int> > x = vector<vector<int> >(n, vector<int>(d, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<d; j++) {
            cin >> x[i][j];
        }
    }
    auto f = [&d] (vector<int> xi, vector<int>yi) {
        double res = 0;
        for(int i=0; i<d; i++) {
            res += pow((yi[i] - xi[i]), 2);
        }
        res = sqrt(res);
        return res - (int)res;
    };
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (f(x[i], x[j]) == 0) count++;
        }
    }
    cout << count << endl;
    return 0;
}
