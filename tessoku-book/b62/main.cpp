#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, m;  // 頂点数n，辺数m
vector<int> seen(1e5, false);
Graph G(1e5);
stack<int> path;

void dfs(int v) {
	seen[v] = true;  // vを探索済みにする

	for (auto next_v : G[v]) {
		if (!seen[next_v]) {  // 探索済みでないなら探索
            path.push(next_v);
			dfs(next_v);  // 再帰的に探索
            if (path.top() == n - 1) return;
            path.pop();
		}
	}
    return;
}

int main() {
    cin >> n >> m;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    path.push(0);
    dfs(0);

    vector<int> ans;
    while (!path.empty()) {
        ans.push_back(path.top());
        path.pop();
    }
    reverse(ans.begin(), ans.end());
    rep(i, ans.size()) {
        if (i) cout << " ";
        cout << ans[i] + 1;
    }
    cout << endl;
    return 0;
}