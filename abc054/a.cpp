#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int a,b;
    cin >> a >> b;
    if(a>b) {
        if(b==1){
            cout << "Bob" << "\n";
        }else cout << "Alice" << "\n";
    } else if(a<b) {
        if(a==1){
            cout << "Alice" << "\n";
        }else cout << "Bob" << "\n";
    }else cout << "Draw" <<"\n";
    return 0;
}
