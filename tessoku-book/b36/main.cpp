#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    string S;
    cin >> n >> k >> S;
    int cnt = 0;
    rep(i,n) {
        if (S[i] == '1') cnt++;
    }
    int gap = abs(cnt - k);
    if (gap % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}