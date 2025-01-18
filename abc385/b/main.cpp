#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--; y--;
    vector<string> grid(h);
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    rep(i, h) cin >> grid[i];
    string t;
    cin >> t;

    int cnt = 0;

    rep(i, (int)t.size()) {
        if (t[i] == 'U' && x-1 >= 0 && x-1 < h) {
            if (grid[x-1][y] != '#') {
                x--;
                if (grid[x][y] == '@' && !visited[x][y]) {
                    cnt++;
                    visited[x][y] = true;
                }
            }
        }
        else if (t[i] == 'D' && x+1 >= 0 && x+1 < h) {
           if (grid[x+1][y] != '#') {
                x++;
                if (grid[x][y] == '@' && !visited[x][y]) {
                    cnt++;
                    visited[x][y] = true;
                }
            }
        }
        else if (t[i] == 'L' && y-1 >= 0 && y-1 < w) {
           if (grid[x][y-1] != '#') {
                y--;
                if (grid[x][y] == '@' && !visited[x][y]) {
                    cnt++;
                    visited[x][y] = true;
                }
            }
        }
        else if (t[i] == 'R' && y+1 >= 0 && y+1 < w) {
           if (grid[x][y+1] != '#') {
                y++;
                if (grid[x][y] == '@' && !visited[x][y]) {
                    cnt++;
                    visited[x][y] = true;
                }
            }
        }
    }
    cout << x+1 << " " << y+1 << " " << cnt << endl;

    return 0;
}