#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // input
    int n;
    ll p, q;
    cin >> n >> p >> q;
    vector<ll> A(n);
    rep(i, n) cin >> A[i];

    int cnt = 0;
    ll product_mod;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                for (int l = k+1; l < n; l++) {
                    for (int m = l+1; m < n; m++) {
                        product_mod = A[i] % p * A[j] % p * A[k] % p * A[l] % p * A[m] % p;
                        if (product_mod == q) cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}