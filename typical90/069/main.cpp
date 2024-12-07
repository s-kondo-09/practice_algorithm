#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1000000007;

// a^n mod を計算する
ll modpow(ll a, ll n, ll mod) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans = 1;

    if (n >= 3) {
        ans *= modpow(k-2, n-2, MOD);
    }
    if (n >= 2) {
        ans *= k-1;
        ans %= MOD;
    }
    ans *= k;
    ans %= MOD;

    cout << ans << endl;

    return 0;
}