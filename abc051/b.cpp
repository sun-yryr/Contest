#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

int main() {
    int k,s;
    scanf("%d %d\n",&k,&s);
    int x,y,z,count=0,tmp;
    for(x=0;x<=k;x++){
        for(y=0;y<=k;y++){
            tmp = s-x-y;
            if(0<=tmp && tmp<=k)count++;
        }
    }
    printf("%d\n",count);
}
