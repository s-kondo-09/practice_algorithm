#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(1510, vector<int>(1510, 0));
    rep(i,n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        grid[c][d]++;
        grid[a][b]++;
        grid[a][d]--;
        grid[c][b]--;
    }
    vector<vector<int>> cum(1510, vector<int>(1510, 0));
    rep(i,1500) {
        rep(j,1509) {
            cum[i+1][j+1] = cum[i+1][j] + cum[i][j+1] - cum[i][j] + grid[i][j];
        }
    }
    int cnt = 0;
    rep(i,1509) {
        rep(j,1509) {
            if (cum[i+1][j+1] > 0) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}