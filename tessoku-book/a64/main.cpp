#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using cr_pair = pair<int, int>;  // (始点からの距離, 頂点番号)
struct edge {  // 行き先とコストを格納する構造体
  int to;
  int cost;
};

int main() {
    int n, m, start = 0;  // 頂点の数n, 辺の数m, 始点の番号start
    cin >> n >> m;

    // グラフ入力受け取り
    vector<vector<edge>> G(n);
    for (int i = 0; i < m; ++i) {
        int s;
        edge e;
        cin >> s >> e.to >> e.cost;
        s--; e.to--;
        G[s].push_back(e);
        G[e.to].push_back({s, e.cost});
    }

    // Dijkstra法のためのデータ構造
    vector<int> dist(n, INT_MAX); // 大きい数で初期化
    priority_queue<cr_pair, vector<cr_pair>, greater<cr_pair>> que;  // 発見済みだが未確定の点を入れるキュー

    // 頂点startからスタート
    dist[start] = 0;
    que.push({0, start}); // 0を発見済みだが未確定の点に追加

    // Dijkstra法開始
    while (!que.empty()) {
      cr_pair c = que.top();  // 未確定の中で現時点で最短距離の要素
      int d = c.first;
      int idx = c.second;
      que.pop();

      if (d > dist[idx]) continue;
      
      for (int i = 0; i < (int)G[idx].size(); ++i) {
        int to = G[idx][i].to;
        int cost = G[idx][i].cost;
        if (d + cost < dist[to]) {
          dist[to] = d + cost;
          que.push({dist[to], to});
        }
      }
    }
    
    for(int i = 0; i < n; ++i) {
      if(dist[i] == INT_MAX) cout << -1 << endl;
      else cout << dist[i] << endl;
    }
}