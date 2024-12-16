#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    rep(i, n) cin >> A[i];
    rep(i, m) cin >> B[i];

    priority_queue<pair<int, int>> B_pair;
    rep(i, m) {
        B_pair.push(make_pair(B[i], i));
    }

    vector<int> ans(m, -1);
    int idx = 0;
    while (!B_pair.empty()) {
        if (A[idx] > B_pair.top().first) idx++;
        if (idx >= n) break;

        if (A[idx] <= B_pair.top().first) {
            ans[B_pair.top().second] = idx + 1;
            B_pair.pop();
        }
    }

    rep(i, m) cout << ans[i] << endl;

    return 0;
}