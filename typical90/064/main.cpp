#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> A(n);
    vector<ll> E(n);
    ll ans = 0;
    rep(i, n) cin >> A[i];
    rep(i, n-1) {
        E[i] = A[i+1] - A[i];
        ans += abs(E[i]);
    }

    rep(i, q) {
        int l, r;
        ll v;
        cin >> l >> r >> v;
        l--; r--;

        ll before = abs(E[l-1]) + abs(E[r]);
        if (l >= 1) E[l-1] += v;
        if (r < n-1) E[r] -= v;
        ll after = abs(E[l-1]) + abs(E[r]);
        ans += (after - before);
        cout << ans << endl; 
    }

    return 0;
}