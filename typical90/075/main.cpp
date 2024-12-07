#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    ll rem = n;
    vector<ll> p;
    for (ll i = 2; i * i <= n; i++) {
        while (rem % i == 0) {
            rem /= i;
            p.push_back(i);
        }
    }
    if (rem != 1LL) p.push_back(rem);

    int ans = 0;

    for (int i = 0; i <= 20; i++) {
		if ((1 << i) >= (int)p.size()) {
            ans = i;
            break; 
        }
	}
    cout << ans << endl;

    return 0;
}