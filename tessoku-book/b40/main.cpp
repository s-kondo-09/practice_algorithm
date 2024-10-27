#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> cnt(100, 0);
    vector<int> A(n);
    rep(i,n) {
        cin >> A[i];
        cnt[A[i] % 100]++;
    }
    ll ans = 0;
    rep(i,51) {
        if (i == 0 || i == 50) ans += cnt[i] * (cnt[i] - 1) / 2;
        else ans += cnt[i] * cnt[100-i];
    }
    cout << ans << endl;
    return 0;
}