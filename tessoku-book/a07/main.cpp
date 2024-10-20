#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int d, n;
    cin >> d >> n;
    vector<ll> B(d, 0);
    rep(i,n) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        B[l]++;
        B[r+1]--;
    }
    int ans = 0;
    rep(i,d) {
        ans += B[i];
        cout << ans << endl;
    }
    return 0;
}