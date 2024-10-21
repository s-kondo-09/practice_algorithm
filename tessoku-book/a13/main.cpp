#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> R(n);
    rep(i,n) cin >> A[i];
    rep(i,n-1) {
        if (i == 0) R[i] = 0;
        else R[i] = R[i-1];

        while (R[i] < n-1 && A[R[i]+1] - A[i] <= k) R[i]++;
    }
    ll ans = 0;
    rep(i,n-1) ans += R[i] - i;
    cout << ans << endl;
    return 0;
}