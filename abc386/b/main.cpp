#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int ans = S.length();
    rep(i, (int)S.length()) {
        if (S[i] == '0') {
            if (i + 1 < (int)S.length() && S[i+1] == '0') {
                ans--;
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}