#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flg = false;
    rep(i,n-2) {
        if (s[i] == s[i+1] && s[i] == s[i+2]) {
            flg = true;
            break;
        }
    }
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}