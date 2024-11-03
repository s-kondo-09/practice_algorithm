#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> cnt;
    ll ans = 0;
    rep(i, n) {
        cin >> A[i];
        ans += cnt[A[i]];
        cnt[A[i]]++;
    }
    cout << ans << endl;
    return 0;
}