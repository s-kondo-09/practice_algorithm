#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<int> dp(n, 0);
    for (int i = 1; i < n; ++i) {
        if (i == 1) dp[i] = dp[i-1] + abs(h[i-1] - h[i]);
        else dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i-2] + abs(h[i-2] - h[i]));
    }
    cout << dp[n-1] << endl;
    return 0;
}