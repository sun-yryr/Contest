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
ll MOD = 10e8 + 7;

// こっちはTLE
int getMasu(int row, int col, vector<string>s) {
    int masu = 1;
    for(int i=row-1; i>=0; i--) {
        if(s[i][col] == '.') masu++;
        else break;
    }
    int row_max = s.size();
    int col_max = s.front().size();
    for(int i=row+1; i<row_max; i++) {
        if(s[i][col] == '.') masu++;
        else break;
    }
    for(int j=col-1; j>=0; j--) {
        if(s[row][j] == '.') masu++;
        else break;
    }
    for(int j=col+1; j<col_max; j++) {
        if(s[row][j] == '.') masu++;
        else break;
    }
    return masu;
}

int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<int> > tmp = vector<vector<int> >(h, vector<int>(w, 0));
    vector<string> s = vector<string>(h, "");
    REP(i, h) {
        cin >> s[i];
    }
    int masu = 0;
    int s_index, g_index[h];
    
    REP(i, h) {
        REP(j, w) {
            if(s[i][j] == '#') {
                tmp[i][j] = 0;
                if (s_index != -1) {
                    for(int p=s_index; p<j; p++) {
                        tmp[i][p] += j-s_index;
                    }
                    s_index = -1;
                }
            } else {
                if (s_index == -1) s_index = j;
            }
            if (j == w-1 && s_index != -1) {
                for(int p=s_index; p<=j; p++){
                    tmp[i][p] += j+1-s_index;
                }
                s_index = -1;
            }
        }
    }
    
    REP(i, w) {
        REP(j, h) {
            if(s[j][i] == '#') {
                tmp[j][i] = 0;
                if (s_index != -1) {
                    for(int p=s_index; p<j; p++) {
                        tmp[p][i] += j-s_index;
                    }
                    s_index = -1;
                }
            } else {
                if (s_index == -1) s_index = j;
            }
            if (j == h-1 && s_index != -1) {
                for(int p=s_index; p<=j; p++){
                    tmp[p][i] += j+1-s_index;
                }
                s_index = -1;
            }
        }
    }
    int maxxx = 0;
    REP(i, h) {
        REP(j, w) {
            tmp[i][j]--;
            maxxx = max(maxxx, tmp[i][j]);
        }
    }
    OUT(maxxx);
    return 0;
}
