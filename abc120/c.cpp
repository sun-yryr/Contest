#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    string s;
    bool c=false;
    int count=0,len;
    cin >> s;
    while(1) {
        c=false;
      	len = s.length()-1;
        REP(i,len) {
            if(s[i] != s[i+1]) {
                s.erase(i,2);
                c=true;
                count+=2;
                break;
            }
        }
        if(c==false) break;
    }
    cout << count;
}