#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> grid(h);
    vector<vector<bool>> ok(h, vector<bool>(w, false));
    rep(i, h) cin >> grid[i];

    int ans = 0;
    rep(i, h) {
        rep(j, w) {
            rep(k, h) {
                rep(l, w) {
                    int cnt = 0;
                    if (i == k && j == l) continue;
                    if (grid[i][j] == '#') continue;
                    if (grid[k][l] == '#') continue;
                    
                    rep(m, h) {
                        rep(n, w) {
                            int dist1 = abs(i - m) + abs(j - n);
                            int dist2 = abs(k - m) + abs(l - n);
                            if (dist1 <= d && grid[m][n] == '.' && !ok[m][n]) {
                                cnt++;
                                ok[m][n] = true;
                            }
                            if (dist2 <= d && grid[m][n] == '.' && !ok[m][n]) {
                                cnt++;
                                ok[m][n] = true;
                            }
                        }
                    }
                    ans = max(ans, cnt);
                    rep(m, h) rep(n, w) ok[m][n] = false;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}