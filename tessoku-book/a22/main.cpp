#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n+1);
    vector<int> B(n+1);
    for (int i = 1; i < n; ++i) cin >> A[i];
    for (int i = 1; i < n; ++i) cin >> B[i];
    vector<int> dp(n+1, -1000000000);
    dp[1] = 0;
    for (int i = 1; i < n; ++i) {
        dp[A[i]] = max(dp[A[i]], dp[i] + 100);
        dp[B[i]] = max(dp[B[i]], dp[i] + 150);
    }
    cout << dp[n] << endl;
    return 0;
}