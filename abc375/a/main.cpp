#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;

    for (int i = 0; i < n-2; ++i) {
        if (s[i] == '#' and s[i + 1] == '.') {
            if (s[i + 2] == '#') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}