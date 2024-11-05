#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

int main() {
    int h, w;
    cin >> h >> w;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;  // 0-indexed
    vector<string> grid(h);
    rep(i, h) cin >> grid[i];

    vector<vector<int>> dist(h, vector<int>(w, -1)); // 初期化
    queue<pair<int, int>> que;  // 発見済みだが未到達の点を入れるキュー

    // 頂点0からスタート
    dist[sy][sx] = 0;
    que.push(make_pair(sy, sx)); // 0を発見済みだが未到達の点に追加

    // BFS開始
    while (!que.empty()) {
        int y = que.front().first; // キューから先頭頂点を取り出す
        int x = que.front().second;
        que.pop();
        
        // v から辿れる頂点をすべて調べる
        rep(i, 4) {
            int next_y = y + dy[i];
            int next_x = x + dx[i];
            if (next_y < 0 || h <= next_y || next_x < 0 || w <= next_x) continue;
            if (dist[next_y][next_x] != -1) continue;
            if (grid[next_y][next_x] == '#') continue;

            // 新たなに発見した頂点の距離を更新してキューに追加
            dist[next_y][next_x] = dist[y][x] + 1;
            que.push(make_pair(next_y, next_x));
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}