#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> L(n);
    vector<int> R(n);
    rep(i,n) cin >> L[i] >> R[i];
    vector<pair<int, int>> movie(n);
    rep(i,n) movie[i] = make_pair(R[i], L[i]);
    sort(movie.begin(), movie.end());
    int now = 0, ans = 0;
    rep(i,movie.size()) {
        if (now <= movie[i].second) {
            now = movie[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}