#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> q(n);
    vector<ll> r(n);
    rep(i,n) cin >> q[i] >> r[i];
    int Q;
    cin >> Q;
    rep(i,Q) {
        ll t, d;
        cin >> t >> d;
        ll m = d / q[t-1];
        if (m * q[t-1] + r[t-1] >= d) cout << m * q[t-1] + r[t-1] << endl;
        else cout << (m + 1) * q[t-1] + r[t-1] << endl;
    }
    return 0;
}