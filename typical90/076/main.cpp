#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> A(n);
    rep(i, n) cin >> A[i];
    rep(i, n) A.push_back(A[i]);

    vector<ll> B(2*n+1, 0);
    rep(i, 2*n-1) B[i+1] = B[i] + A[i];

    if (B[n] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }

	for (int i = 0; i < n; i++) {
		ll goal = B[i] + B[n] / 10LL;
		int pos1 = lower_bound(B.begin(), B.end(), goal) - B.begin();
		if (B[pos1] == goal) {
			cout << "Yes" << endl;
			return 0;
		}
	}

    cout << "No" << endl;

    return 0;
}