#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    Graph G(n);
    for (int i = 1; i < n; ++i) {
        cin >> A[i];
        A[i]--;
        G[A[i]].push_back(i);
    }

    vector<int> dp(n, 0);  // 社員iの部下の数
    for (int i = n-1; i >= 0; --i) {
        rep(j, G[i].size()) dp[i] += dp[G[i][j]] + 1;
    }

    rep(i, n) {
        if (i) cout << " ";
        cout << dp[i];
    }
    cout << endl;
    return 0;
}