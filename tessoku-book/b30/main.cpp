#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll modpow(ll a, ll n, ll mod) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}

ll modinv(ll a, ll mod) {
	return modpow(a, mod - 2, mod);
}

ll modconb(ll n, ll r, ll mod) {
    ll num = 1, den = 1;
    for (int i = 1; i <= n; ++i) {
        num = num * i % mod;
    }
    num %= mod;

    for (int i = 1; i <= r; ++i) {
        den = den * i % mod;
    }
    for (int i = 1; i <= n-r; ++i) {
        den = den * i % mod;
    }
    den = modinv(den, mod);

    return (num * den) % mod;
}

int main() {
    ll h, w;
    cin >> h >> w;
    cout << modconb(h+w-2, w-1, 1000000007) << endl;
    return 0;
}