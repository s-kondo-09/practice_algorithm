#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector<int>(w, 0));
    vector<vector<int>> cum(h+1, vector<int>(w+1, 0));
    rep(i,h) {
        rep(j,w) {
            cin >> grid[i][j];
        }
    }
    rep(i,h) {
        rep(j,w) {
            cum[i+1][j+1] = cum[i+1][j] + cum[i][j+1] - cum[i][j] + grid[i][j];
        }
    }
    int q;
    cin >> q;
    rep(i,q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--; b--; c--; d--;
        int ans = cum[c+1][d+1] - cum[c+1][b] - cum[a][d+1] + cum[a][b];
        cout << ans << endl;
    }
    return 0;
}