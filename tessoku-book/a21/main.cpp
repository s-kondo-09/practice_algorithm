#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> P(n+1);
    vector<int> A(n+1);
    for (int i = 1; i <= n; ++i) cin >> P[i] >> A[i];
    
    // dynamic programming
    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[1][n] = 0; // initial condition
    for (int len = n-2; len >= 0; --len) {
        for (int l = 1; l <= n - len; ++l) {
            int r = l + len;

            int score1 = 0;
            if (l <= P[l-1] && P[l-1] <= r) score1 = A[l-1];
            int score2 = 0;
            if (l <= P[r+1] && P[r+1] <= r) score2 = A[r+1];

            if (l == 1) dp[l][r] = dp[l][r+1] + score2;
            else if (r == n) dp[l][r] = dp[l-1][r] + score1;
            else dp[l][r] = max(dp[l][r+1] + score2, dp[l-1][r] + score1);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
}