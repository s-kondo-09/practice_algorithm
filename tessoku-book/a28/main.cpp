#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<char> T(n);
    vector<int> A(n);
    rep(i,n) cin >> T[i] >> A[i];

    int ans = 0;
    rep(i,n) {
        if (T[i] == '+') ans += A[i];
        else if (T[i] == '-') ans -= A[i];
        else ans *= A[i];

        if (ans >= 0) ans %= 10000;
        else ans = (ans + 10000) % 10000;
        cout << ans << endl;
    }
    return 0;
}