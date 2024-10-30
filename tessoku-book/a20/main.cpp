#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();

    // dynamic programming
    vector<vector<int>> dp(2001, vector<int>(2001));
    dp[0][0] = 0;
    rep(i,n+1) {
        rep(j,m+1) {
            if (i >= 1 && j >= 1 && s[i-1] == t[j-1]) {
                dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + 1});
            }
            else if (i >= 1 && j >= 1) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            else if (i >= 1) {
                dp[i][j] = dp[i-1][j];
            }
            else if (j >= 1) {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}