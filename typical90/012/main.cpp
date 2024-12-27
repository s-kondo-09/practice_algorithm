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

	bool isSame(int x, int y) {  // xとyが同じ木に属するか
		int rx = root(x);
		int ry = root(y);
		return rx == ry;
	}
};

int main() {
    int h, w, q;
    cin >> h >> w >> q;
    
    UnionFind UF(h * w);
    vector<vector<bool>> isRed(h, vector<bool>(w, false));

    rep(i, q) {
        int query;
        cin >> query;
        if (query == 1) {
            int r, c;
            cin >> r >> c;
            r--; c--;
            isRed[r][c] = true;
            vector<int> dr = {-1, 0, 1, 0};
            vector<int> dc = {0, -1, 0, 1};
            rep(i, 4) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr < 0 || nr >= h || nc < 0 || nc >= w) continue;
                if (!isRed[nr][nc]) continue;
                int hash1 = (r) * w + (c);
                int hash2 = (nr) * w + (nc);
                UF.unite(hash1, hash2);
            }
        }
        else if (query == 2) {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            ra--; ca--; rb--; cb--;
            if (!isRed[ra][ca] || !isRed[rb][cb]) {
                cout << "No" << endl;
                continue;
            }

            int hash1 = (ra) * w + (ca);
            int hash2 = (rb) * w + (cb);
            if (UF.isSame(hash1, hash2)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}