#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    vector<int> cum_hit(n + 1, 0);
    vector<int> cum_miss(n + 1, 0);
    rep(i,n) {
        if (A[i] == 1) {
            cum_hit[i+1] = cum_hit[i] + 1;
            cum_miss[i+1] = cum_miss[i];
        } else {
            cum_hit[i+1] = cum_hit[i];
            cum_miss[i+1] = cum_miss[i] + 1;
        }
    }
    int q;
    cin >> q;
    rep(i,q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        int hit = cum_hit[r+1] - cum_hit[l];
        int miss = cum_miss[r+1] - cum_miss[l];
        if (hit > miss) cout << "win" << endl;
        else if (hit == miss) cout << "draw" << endl;
        else cout << "lose" << endl;
    }
    return 0;
}