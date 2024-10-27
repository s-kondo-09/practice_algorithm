#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> cnt(101, 0);
    vector<int> A(n);
    rep(i,n) {
        cin >> A[i];
        cnt[A[i]]++;
    }
    ll ans = 0;
    rep(i,101) {
        ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
    }
    cout << ans << endl;
    return 0;
}