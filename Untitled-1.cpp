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
    string aiueo = "あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわゐゑをがぎぐげござじずぜぞだぢづでどばびぶべぼぱぴぷぺぽぁぃぅぇぉっゃゅょん";
    unordered_map<string, vector<string> > dic;
    unordered_map<string, int> dist;
    int size = aiueo.size();
    REP(i, size) {
        dic.emplace(aiueo[i], vector<string>());
        dist.emplace(aiueo[i], -1);
    }

    int n;
    cin >> n;
    REP(i, n) {
        string tmp;
        cin >> tmp;
        dic[tmp[0]].push_back(tmp[tmp.length()-1]);
    }
    queue<string> q;
    string v = "り";
    size = dic[v].size();
    REP(i, size) {
        dist[dic[v][i]] = 1;
        q.push(dic[v][i]);
    }
    while(!q.empty()) {
        v = q.front();
        q.pop();
        if (v == "ん") break;
        size = dic[v].size();
        REP(i, size) {
            if (dist[dic[v][i]] != -1) continue;
            dist[dic[v][i]] = dist[v] + 1;
            q.push(dic[v][i]);
        }
    }
    if (v == "ん") {
        printf("%d\n", dist[v]);
    } else {
        printf("-1\n");
    }
    return 0;
}
