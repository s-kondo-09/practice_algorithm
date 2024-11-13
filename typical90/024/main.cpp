#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // input
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> A(n), B(n);
    rep(i, n) cin >> A[i];
    rep(i, n) cin >> B[i];

    rep(i, n) {
        k -= abs(A[i] - B[i]);
    }

    if ((k >= 0) && (k % 2 == 0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}