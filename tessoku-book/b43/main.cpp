#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(m);
    vector<int> ans(n, m);
    rep(i,m) {
        cin >> A[i];
        A[i]--;
        ans[A[i]]--;
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;
}