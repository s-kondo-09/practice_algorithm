#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s,t;
    cin >> s >> t;
    int n = min(s.length(), t.length());
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        if(s[i] != t[i]) {
            ans = i;
            break;
        }
    }

    if (ans == -1 && s.length() != t.length()) {
        ans = n;
    }

    cout << ans + 1 << endl;

    return 0;
}