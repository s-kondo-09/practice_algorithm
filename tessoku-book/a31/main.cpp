#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    ans += n / 3;
    ans += n / 5;
    ans -= n / 15;
    cout << ans << endl;
    return 0;
}