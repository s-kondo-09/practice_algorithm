#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> A(n);
    rep(i,n) cin >> A[i];
    vector<ll> cum(n + 1, 0);
    rep(i,n) cum[i+1] = cum[i] + A[i];  // A[0]からA[i]までの総和
    rep(i,q) {
        int l, r;
        cin >> l >> r;
        l--; r--;  // 0-indexed
        cout << cum[r+1] - cum[l] << endl;
    }
    return 0;
}