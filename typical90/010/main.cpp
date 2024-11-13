#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // input
    int n;
    cin >> n;
    vector<int> Class(n);
    vector<int> Point(n);
    rep(i, n) {
        cin >> Class[i] >> Point[i];
    }

    // cumulative sum
    vector<int> cum_c1(n+1, 0), cum_c2(n+1, 0);
    for (int i = 0; i < n; i++) {
        if (Class[i] == 1) {
            cum_c1[i+1] = cum_c1[i] + Point[i];
            cum_c2[i+1] = cum_c2[i];
        }
        else {
            cum_c1[i+1] = cum_c1[i];
            cum_c2[i+1] = cum_c2[i] + Point[i];
        }
    }

    // query
    int q;
    cin >> q;
    rep(i, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        int ans_c1 = cum_c1[r+1] - cum_c1[l];
        int ans_c2 = cum_c2[r+1] - cum_c2[l];
        printf("%d %d\n", ans_c1, ans_c2);
    }

    return 0;
}