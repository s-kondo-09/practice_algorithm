#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct UnionFind {
	vector<int> par;  // parent

	UnionFind(int N) : par(N) {
		for (int i=0; i < N; ++i) par[i] = i;
	}

	int root(int x) {  // xの根を再帰的に探索
		if (par[x] == x) return x;
			return par[x] = root(par[x]);
	}

	void unite(int x, int y) {  // xとyの木を併合
		int rx = root(x);
		int ry = root(y);
		if (rx == ry) return;
		par[rx] = ry;
	}

	bool same(int x, int y) {  // xとyが同じ木に属するか
		int rx = root(x);
		int ry = root(y);
		return rx == ry;
	}
};

int main() {
    int n, q;
    cin >> n >> q;
    UnionFind UF(n);
    rep(i, q) {
        int query, u, v;
        cin >> query >> u >> v;
        u--; v--;
        if (query == 1) {
            UF.unite(u, v);
        }
        else {
            if (UF.same(u, v)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}