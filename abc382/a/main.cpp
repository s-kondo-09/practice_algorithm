#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int cnt = 0;

    rep(i, n) {
        if (s[i] == '.') cnt++;
    }

    cout << cnt + d << endl;

    return 0;
}