#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define MOD 46

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(n);
    vector<ll> cnt_A(MOD, 0);
    vector<ll> cnt_B(MOD, 0);
    vector<ll> cnt_C(MOD, 0);

    ll ans = 0;

    rep(i, n) {
        cin >> A[i];
        cnt_A[A[i] % MOD]++;
    }
    rep(i, n) {
        cin >> B[i];
        cnt_B[B[i] % MOD]++;
    }
    rep(i, n) {
        cin >> C[i];
        cnt_C[C[i] % MOD]++;
    }

    rep(i, MOD) {
        rep(j, MOD) {
            rep(k, MOD) {
                if ((i + j + k) % MOD == 0) {
                   ans += cnt_A[i] * cnt_B[j] * cnt_C[k];
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}