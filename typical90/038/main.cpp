#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, pow18 = 1000000000000000000LL;
    cin >> a >> b;

    ll ans = a / gcd(a, b);
    if (ans > pow18 / b) cout << "Large" << endl;
    else cout << ans * b << endl;

    return 0;
}