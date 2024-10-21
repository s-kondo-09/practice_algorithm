#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> grid(h+1, vector<int>(w+1, 0));
    rep(i,n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--; b--; c--; d--;
        grid[c+1][d+1]++;
        grid[a][b]++;
        grid[c+1][b]--;
        grid[a][d+1]--;
    }
    vector<vector<int>> cum(h+1, vector<int>(w+1, 0));
    rep(i,h) {
        rep(j,w) {
            cum[i+1][j+1] = cum[i+1][j] + cum[i][j+1] - cum[i][j] + grid[i][j];
        }
    }
    rep(i,h) {
        rep(j,w) {
            if (j) cout << " ";
            cout << cum[i+1][j+1];
        }
        cout << endl;
    }
    return 0;
}