#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll x;
    cin >> x;
    ll ans = 0;
    ans += x / 11 * 2;
    x = x % 11;
    while(x > 0) {
        x -= 6;
        ans++;
        if (x <= 0) break;
        x -= 5;
        ans++;
    }
    cout << ans << endl;
    return 0;
}