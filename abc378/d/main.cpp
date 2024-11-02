#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};

int h, w, k;
int cnt = 0;
vector<string> grid(10);


void dfs(int i, int j, int dist, vector<vector<bool>>& seen) {
    if (dist == k) {
        cnt++;
        return;
    }

    seen[i][j] = true;

    for (int d = 0; d < 4; d++) {
        int nexti = i + dx[d];
        int nextj = j + dy[d];
        if (0 <= nexti && nexti < h && 0 <= nextj && nextj < w) {
            if (grid[nexti][nextj] == '.' && !seen[nexti][nextj]) {
                dfs(nexti, nextj, dist + 1, seen);
            }
        }
    }
    
    seen[i][j] = false;
}

int main() {
    cin >> h >> w >> k;
    rep(i, h) cin >> grid[i];

    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] == '.') {
                vector<vector<bool>> seen(h, vector<bool>(w, false));
                dfs(i, j, 0, seen);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
