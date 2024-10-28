#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> A(n+1, 0);
    for (int i = 1; i <= n; ++i) cin >> A[i];  // 1-indexed
    vector<vector<bool>> dp(n+1, vector<bool>(s+1, 0));

    // dynamic programming (カードが0枚)
    dp[0][0] = true;  // カードを0枚選び合計が0になるか
    for (int i = 1; i <= n; ++i) dp[0][i] = false;  // カードを0枚選び合計がiになるか

    // dynamic programming (カードが1枚以上)
    for (int i = 1; i <= n; ++i) {
        rep(j,s+1) {
            if (dp[i-1][j] == true) dp[i][j] = true; // カード1からi-1の中から数枚選んで合計がjになるならば，カードを一枚増やしても当然OK
            else if (j >= A[i] && dp[i-1][j-A[i]] == true) dp[i][j] = true;  // カード1からi-1の中から数枚選んで合計がj-A[i]になるならば，カードiを追加すると合計がjになる
            else dp[i][j] = false;
            }
        }
    if (dp[n][s]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}