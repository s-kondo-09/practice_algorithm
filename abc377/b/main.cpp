#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<string> S(8);
    rep(i,8) cin >> S[i];
    int cnt = 0;
    bool flg = true;
    rep(i,8) {
        rep(j,8) {
            flg = true;
            rep(k,8) {
                rep(l,8) {
                    if (S[i][k] == '#') flg = false;
                    if (S[l][j] == '#') flg = false;
                }
            }
            if (flg) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}