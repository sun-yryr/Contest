#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int tmp = b/a;
    if(tmp > c) cout << c;
    else cout << tmp;
}
