#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    rep(i,q) {
        int x;
        cin >> x;
        bool flg = true;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x % i == 0) {
                cout << "No" << endl;
                flg = false;
                break;
            }
        }
        if (flg) cout << "Yes" << endl;
    }
    return 0;
}