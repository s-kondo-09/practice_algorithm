#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, W;
    cin >> n >> W;
    vector<ll> w(n+1);
    vector<ll> v(n+1);
    for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];

    // dynamic programming
    vector<vector<ll>> dp(n+1, vector<ll>(W+1));  // 品物1からiまでの中から，重さの合計がjとなるように選んだときの価値の最大値
    dp[0][0] = 0;  // 何も選ばず重さの合計が0のとき，価値の最大値は当然0
    for (int i = 1; i <= W; ++i) dp[0][i] = LLONG_MIN;  // 何も選ばずに重さの合計を1以上にすることはできない
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= W; ++j) {
            if (j < w[i]) {
                dp[i][j] = dp[i-1][j];  // 選ばない
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }
    cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
    return 0;
}