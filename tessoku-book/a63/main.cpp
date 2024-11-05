#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;  // 頂点の数n, 辺の数m
    cin >> n >> m;

    // グラフ入力受け取り
    Graph G(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);  // 有向グラフでは削除
    }

    // BFSのためのデータ構造
    vector<int> dist(n, -1); // 初期化
    queue<int> que;  // 発見済みだが未到達の点を入れるキュー

    // 頂点0からスタート
    dist[0] = 0;
    que.push(0); // 0を発見済みだが未到達の点に追加

    // BFS開始
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (dist[nv] != -1) continue; // すでに発見済みなら無視

            // 新たなに発見した頂点の距離を更新してキューに追加
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    rep(i, n) {
        cout << dist[i] << endl;
    }
}