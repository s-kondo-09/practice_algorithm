#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> a(4);
    rep(i,4) cin >> a[i];
    vector<int> color(5, 0);
    rep(i,4) {
        color[a[i]]++;
    }
    int cnt = 0;
    rep(i,5) {
        cnt += color[i] / 2;
    }
    cout << cnt << endl;
    return 0;
}