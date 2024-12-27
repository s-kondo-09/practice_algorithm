#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using Graph = vector<vector<int>>;

int n;
vector<int> dist(1e6, -1); // 初期化
Graph G(1e6);

void bfs(int start) {
    rep(i, n) dist[i] = -1;
    
    queue<int> que;  // 発見済みだが未到達の点を入れるキュー

    // 頂点startからスタート
    dist[start] = 0;
    que.push(start); // 0を発見済みだが未到達の点に追加

    // BFS開始
    while (!que.empty()) {
        int pos = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int next : G[pos]) {
            if (dist[next] != -1) continue; // すでに発見済みなら無視

            // 新たなに発見した頂点の距離を更新してキューに追加
            dist[next] = dist[pos] + 1;
            que.push(next);
        }
    }
}

int main() {
    cin >> n;
    G.resize(n);
    dist.resize(n, -1);

    rep(i, n-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;  // 0-indexed
        G[a].push_back(b);
        G[b].push_back(a);
    }

    bfs(0);
    int maxpoint = max_element(dist.begin(), dist.end()) - dist.begin();

    bfs(maxpoint);
    int maxdist = *max_element(dist.begin(), dist.end());
    

    cout << maxdist + 1 << endl;

    return 0;
}