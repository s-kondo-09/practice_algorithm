#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, m;  // 頂点数n，辺数m
vector<int> seen(1e5, false);

void dfs(const Graph &G, int v) {
	
	seen[v] = true;  // vを探索済みにする

	for (auto next_v : G[v]) {
		if (!seen[next_v]) {  // 探索済みでないなら探索
			dfs(G, next_v);  // 再帰的に探索
		}
	}
}

int main() {
    cin >> n >> m;
    Graph G(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);  // 有向グラフの場合は削除
    }
    bool flg = true;
    dfs(G, 0);
    rep(i,n) {
        if (!seen[i]) {
            flg = false;
            break;
        }
    }
    if (flg) cout << "The graph is connected." << endl;
    else cout << "The graph is not connected." << endl;
    return 0;
}