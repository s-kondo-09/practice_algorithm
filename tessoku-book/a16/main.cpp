#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 1; i < n; ++i) cin >> A[i];
    for (int i = 2; i < n; ++i) cin >> B[i];

    vector<int> dp(n, 0);
    for (int i = 1; i < n; ++i) {
        if (i == 1) dp[i] = dp[i-1] + A[i];
        else dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
    }
    cout << dp[n-1] << endl;

    return 0;
}