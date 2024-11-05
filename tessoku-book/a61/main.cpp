#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;  // 頂点数n，辺数m
    cin >> n >> m;

    Graph G(n);

    rep(i, m) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    rep(i, n) {
        printf("%d: {", i+1);
        rep(j, G[i].size()) {
            if (j) cout << ", ";
            cout << G[i][j] + 1;
        }
        cout << "}" << endl;
    }
    return 0;
}