#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define COUT(a) cout << (a);
#define ENDL cout << "\n";
int n,m;
int match[9]={2,5,5,4,5,6,3,7,6};
int count_num[9]={0,0,0,0,0,0,0,0,0};
void jun(int a[]) {
    int temp;
    for (int i = 0; i < m; i++) {
        for (int j=1; j<m; j++) {
            if (match[a[j - 1]-1] > match[a[j]-1]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1]= temp;
            }
        }
    }
}
void kore(int a[]){
    int temp;
    for (int i = 0; i < m; i++) {
        for (int j=1; j<m; j++) {
            if (match[a[j - 1]-1] == match[a[j]-1] && a[j-1] < a[j]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1]= temp;
            }
        }
    }
}
bool mm(int a[],int cost){
    if(cost==0) return true;
    REP(i,m) {
        if(match[a[i]-1]<=cost) if(mm(a,cost-match[a[i]-1])) {
            count_num[a[i]-1]++;
            return true;
        }
    }
    return false;
}

int main() {
    int tmp;
    scanf("%d %d\n",&n,&m);
    int a[m];
    REP(i,m) scanf("%d",&a[i]);
    jun(a);
    kore(a);
    string ans;
    if(mm(a,n)) {
        for(int i=8;i>=0;i--){
            while(count_num[i]!=0) {
                ans+=to_string(i+1);
                count_num[i]--;
            }
        }
    }
    COUT(ans)
}


