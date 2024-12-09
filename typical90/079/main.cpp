#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<ll>> A(h, vector<ll>(w));
    vector<vector<ll>> B(h, vector<ll>(w));

    rep(i, h) rep(j, w) cin >> A[i][j];
    rep(i, h) rep(j, w) cin >> B[i][j];

    ll cnt = 0;

    rep(i, h-1) {
        rep(j, w-1) {
            int diff = B[i][j] - A[i][j];
            A[i][j] += diff;
            A[i+1][j] += diff;
            A[i][j+1] += diff;
            A[i+1][j+1] += diff;
            cnt += abs(diff);
        }
    }

    bool flg = true;

    rep(i, h) {
        if (A[i][w-1] != B[i][w-1]) flg = false;
    }

    rep(j, w) {
        if (A[h-1][j] != B[h-1][j]) flg = false;
    }

    if (flg) {
        cout << "Yes" << endl;
        cout << cnt << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}