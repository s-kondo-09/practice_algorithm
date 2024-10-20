#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int t, n;
    cin >> t >> n;
    vector<ll> B(t+1, 0);
    rep(i,n) {
        int l, r;
        cin >> l >> r;
        B[l]++;
        B[r]--;
    }
    int ans = 0;
    rep(i,t) {
        ans += B[i];
        cout << ans << endl;
    }
    return 0;
}