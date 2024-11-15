#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int cnt = 0;
    rep(i, n) {
        sort(G[i].begin(), G[i].end());
        int idx = upper_bound(G[i].begin(), G[i].end(), i) - G[i].begin();
        if (idx == 1) cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}