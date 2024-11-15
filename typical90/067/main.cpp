#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll basen_to_base10(int n, string S) {
	ll ans = 0, x = 1;
	for (int i = (int)S.size() - 1; i >= 0; i--) {
		ans += 1LL * (S[i] - '0') * x;
		x *= 1LL * n;
	}

	return ans;
}

string base10_to_basen(int n, ll S) {
    if (S == 0) return "0";

	string ans;
	while (S > 0) {
		ans = char  ((S % n) + '0') + ans;
		S /= n;
	}

	return ans;
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    rep(i, k) {
        n = base10_to_basen(9, basen_to_base10(8, n));  // 9進数に変換
        rep(j, n.size()) {
            if (n[j] == '8') n[j] = '5';
        }
    }
    
    cout << n << endl;

    return 0;
}