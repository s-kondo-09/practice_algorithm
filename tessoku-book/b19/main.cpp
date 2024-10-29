#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    ll W;
    cin >> n >> W;
    vector<ll> w(n+1);
    vector<ll> v(n+1);
    for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];

    // dynamic programming
    vector<vector<ll>> dp(n+1, vector<ll>(1e5+1, 1e15));  // 品物1からiまでの中から，価値がjとなるように選んだときの重量の最小値
    dp[0][0] = 0;  // 何も選ばず価値の合計が0のとき，重量の最小値は当然0
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= 1e5; ++j) {
            if (j < v[i]) {
                dp[i][j] = dp[i-1][j];  // 選ばない
            }
            else {
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i <= 1e5; ++i) {
        if (dp[n][i] <= W) {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}