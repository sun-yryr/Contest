#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int n,ans=0;
    int h,w;
    int a,b;
    scanf("%d %d", &h,&w);
    scanf("%d %d", &a,&b);
    cout << (h-a)*(w-b) << "\n";
    return 0;
}
