#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(1510, vector<int>(1510, 0));
    rep(i,n) {
        int x, y;
        cin >> x >> y;
        grid[x][y] += 1;
    }
    vector<vector<int>> cum(1510, vector<int>(1510, 0));
    rep(i,1509) {
        rep(j,1509) {
            cum[i+1][j+1] = cum[i][j+1] + cum[i+1][j] - cum[i][j] + grid[i][j];
        }
    }
    int q;
    cin >> q;
    rep(i,q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = cum[c+1][d+1] - cum[c+1][b] - cum[a][d+1] + cum[a][b];
        cout << ans << endl;
    }
    return 0;
}