#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> K(n);
    rep(i,n) cin >> K[i];

    ll ans = LLONG_MAX;
    
    for (int tmp = 0; tmp < (1 << n); tmp++) {
	bitset<20> s(tmp);
	//ビット全探索の処理
    ll ansA = 0;
    ll ansB = 0;
    for (int i = 0; i < n; ++i) {
        if (s.test(i)) {
            ansA += K[i];
        } else {
            ansB += K[i];
        }
    }
    ans = min(ans, max(ansA, ansB));

	}

    cout << ans << endl;

    return 0;
}