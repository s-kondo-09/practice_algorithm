#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int k;
    string S, T;
    cin >> k >> S >> T;

    int n = S.length();
    int m = T.length();

    bool flg;

    if (S == T) flg = true;
    else if (abs(n - m) > 1) flg = false;
    else if (n == m) {
        int cnt = 0;
        rep(i, n) {
            if (S[i] != T[i]) cnt++;
        }
        if (cnt == 1) flg = true;
        else flg = false;
    }
    else {
        if (n > m) {
            int j = 0;
            int cnt = 0;
            rep(i, n) {
                if (S[i] != T[j]) {
                    cnt++;
                    continue;
                }
                j++;
            }
            if (cnt == 1) flg = true;
            else flg = false;
        }
        else {
            int j = 0;
            int cnt = 0;
            rep(i, m) {
                if (S[j] != T[i]) {
                    cnt++;
                    continue;
                }
                j++;
            }
            if (cnt == 1) flg = true;
            else flg = false;
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}