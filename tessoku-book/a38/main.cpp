#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int d, n;
    cin >> d >> n;
    vector<int> L(n);
    vector<int> R(n);
    vector<int> H(n);
    vector<int> time(d, 24);
    int ans = 0;
    rep(i,n) {
        cin >> L[i] >> R[i] >> H[i];
        L[i]--; R[i]--;  // 0-indexed
    }
    rep(i,n) {
        for (int j = L[i]; j <= R[i]; ++j) {
            time[j] = min(time[j], H[i]);
        } 
    }
    rep(i,d) ans += time[i];
    cout << ans << endl;
    return 0;
}