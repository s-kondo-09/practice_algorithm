#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> T(n);
    rep(i,n) cin >> T[i];
    int cnt = 1;
    int last = T[0];
    rep(i,n) {
        if (T[i] - last >= c) {
            last = T[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}