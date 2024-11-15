#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> A(n), A_minus(n);
    rep(i, n) {
        cin >> A[i];
        A_minus[i] = -A[i];
    }
    sort(A.begin(), A.end());
    sort(A_minus.begin(), A_minus.end());

    int q;
    cin >> q;

    rep(i, q) {
        ll b;
        cin >> b;

        int idx1 = lower_bound(A.begin(), A.end(), b) - A.begin();
        int idx2 = lower_bound(A_minus.begin(), A_minus.end(), -b) - A_minus.begin();
        ll ans;
        if (idx1 < (int)A.size() && idx2 < (int)A_minus.size()) {
            ans = min(abs(A[idx1] - b), abs(-A_minus[idx2] - b));
        }
        else if (idx1 < (int)A.size()) {
            ans = abs(A[idx1] - b);
        }
        else {
            ans = abs(-A_minus[idx2] - b);
        }

        cout << ans << endl;
    }

    return 0;
}