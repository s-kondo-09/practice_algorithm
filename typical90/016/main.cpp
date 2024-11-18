#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    int max_num = 10000;
    ll ans = LLONG_MAX;
    rep(i, max_num) {
        rep(j, max_num) {
            ll res = n - i * a - j * b;
            if (res >= 0 && res % c == 0) {
                ans = min(ans, i+j+res/c);
            }
        }
    }

    cout << ans << endl;

    return 0;
}