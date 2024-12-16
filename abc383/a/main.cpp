#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> T(n), V(n);
    rep(i, n) cin >> T[i] >> V[i];

    int ans = 0;
    int before = 0;
    rep(i, n) {
        if (i != 0) ans -= T[i] - T[i-1];
        if (ans < 0) ans = 0;
        ans += V[i];
    }

    cout << ans << endl;
    return 0;
}