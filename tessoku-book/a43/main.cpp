#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, l;
    cin >> n >> l;
    vector<ll> A(n);
    vector<char> B(n);
    ll dist = 0, dist_from_E = 0, dist_from_W = 0;
    rep(i,n) {
        cin >> A[i] >> B[i];
        if (B[i] == 'E') dist_from_E = max(dist_from_E, l - A[i]);
        else dist_from_W = max(dist_from_W, A[i]);
    }
    dist = max(dist_from_E, dist_from_W);
    cout << dist << endl;
    return 0;
}