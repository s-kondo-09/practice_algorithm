#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(1010, vector<int>(1010, 0));
    rep(i, n) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        grid[rx][ry]++;
        grid[lx][ly]++;
        grid[lx][ry]--;
        grid[rx][ly]--;
    }

    vector<vector<int>> cum(1010, vector<int>(1010, 0));
    vector<int> cnt(n+1, 0);
    rep(i, 1005) {
        rep(j, 1005) {
            cum[i+1][j+1] = cum[i][j+1] + cum[i+1][j] - cum[i][j] + grid[i][j];
            cnt[cum[i+1][j+1]]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}