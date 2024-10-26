#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> X(n);
    vector<ll> Y(n);
    rep(i,n) {
        cin >> X[i] >> Y[i];
        X[i]--;
    }
    vector<pair<ll, ll>> job(n);
    rep(i,n) job[i] = make_pair(Y[i], X[i]);
    sort(job.begin(), job.end(), greater<pair<ll, ll>>());
    ll ans = 0;
    rep(i,d) {
        rep(j,n) {
            if (job[j].second <= i) {
                ans += job[j].first;
                job[j].second = d + 1;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}