#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;
int ruiseki[1001];
double expected_value[200001];

int main() {
    ruiseki[0] = 0;
    for (int i=1; i<=1000; i++) {
        ruiseki[i] = ruiseki[i-1] + i;
    }
    int n, k;
    cin >> n >> k;
    int p;
    cin >> p;
    expected_value[0] = (1.0/static_cast<double>(p)) * ruiseki[p];
    for (int i=1; i<n; i++) {
        cin >> p;
        expected_value[i] = expected_value[i-1] + ((1.0/static_cast<double>(p)) * ruiseki[p]);
    }
    double maxxxx = 0.0;
    if (n == 1) {
        maxxxx = expected_value[0];
    } else if (n == k) {
        maxxxx = expected_value[n-1];
    } else {
        for (int i=k; i<n; i++) {
            if (maxxxx < (expected_value[i]-expected_value[i-k])) {
                maxxxx = expected_value[i]-expected_value[i-k];
            }
        }
    }
    printf("%.12lf\n", maxxxx);
    return 0;
}

