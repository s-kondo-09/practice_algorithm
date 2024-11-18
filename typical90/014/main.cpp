#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> A(n), B(n);
    rep(i, n) cin >> A[i];
    rep(i, n) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    ll ans = 0;
    rep(i, n) {
        ans += abs(A[i] - B[i]);
    }

    cout << ans << endl;
    
    return 0;
}