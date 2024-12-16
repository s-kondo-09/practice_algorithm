#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> A(n);
    vector<ll> cum(2 * n + 1, 0);
    
    ll sum = 0;
    rep(i, n) {
        cin >> A[i];
        sum += A[i];
    }

    rep(i, n) {
        A.push_back(A[i]);
    }

    rep(i, 2 * n) {
        cum[i+1] = cum[i] + A[i];  // cum[i]: A[i-1]までの和 A[-1]=0と考える
    }

    s -= (s / sum) * sum;

    bool flg = false;

    rep(l, 2 * n) {
        ll cum_r = s + cum[l];
        int idx = lower_bound(cum.begin(), cum.end(), cum_r) - cum.begin();
        if (cum[idx] == cum_r) flg = true;
    }


    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}