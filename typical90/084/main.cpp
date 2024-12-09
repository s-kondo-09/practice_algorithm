#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<pair<ll, ll>> RLE(string S) {
	vector<pair<ll, ll>> p;
	ll cnt = 0;
	for (int i = 0; i < (int)S.size(); i++) {
		cnt++;
		if (i == (int)S.size() - 1 || S[i] != S[i + 1]) {
			p.push_back(make_pair(S[i], cnt));
			cnt = 0;
		}
	}
	return p;
}

int main() {
    ll n;
    string S;
    cin >> n >> S;

    vector<pair<ll, ll>> encoding = RLE(S);
    ll ret = 0;
    rep(i, encoding.size()) {
        ret += 1LL * encoding[i].second * (encoding[i].second + 1LL) / 2LL;
    }

    cout << n * (n + 1LL) / 2LL - ret << endl;

    return 0;
}