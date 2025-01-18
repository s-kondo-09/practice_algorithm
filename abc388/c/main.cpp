#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];

    ll ans = 0;

    rep(i, n) {
        ll idx = upper_bound(A.begin(), A.end(), A[i]/2) - A.begin();
        ans += idx;
    }

    cout << ans << endl;

    return 0;
}