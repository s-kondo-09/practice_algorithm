#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, m ,b;
    cin >> n >> m >> b;
    vector<ll> A(n);
    vector<ll> C(m);
    rep(i,n) cin >> A[i];
    rep(i,m) cin >> C[i];

    ll ans = 0;
    rep(i,n) ans += m * A[i];
    rep(i,m) ans += n * C[i];
    ans += m * n * b;
    cout << ans << endl;

    return 0;
}