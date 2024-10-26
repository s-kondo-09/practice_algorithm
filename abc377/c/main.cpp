#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    vector<ll> b(m);
    rep(i,m) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    set<pair<ll, ll>> occupied;
    rep(i,m) {
        occupied.insert(make_pair(a[i], b[i]));
    }
    rep(k,m) {
        ll i = a[k];
        ll j = b[k];
        if (i+2 < n && i+2 >= 0 && j+1 < n && j+1 >= 0) occupied.insert(make_pair(i+2, j+1));
        if (i+1 < n && i+1 >= 0 && j+2 < n && j+2 >= 0) occupied.insert(make_pair(i+1, j+2));
        if (i-1 < n && i-1 >= 0 && j+2 < n && j+2 >= 0) occupied.insert(make_pair(i-1, j+2));
        if (i-2 < n && i-2 >= 0 && j+1 < n && j+1 >= 0) occupied.insert(make_pair(i-2, j+1));
        if (i-2 < n && i-2 >= 0 && j-1 < n && j-1 >= 0) occupied.insert(make_pair(i-2, j-1));
        if (i-1 < n && i-1 >= 0 && j-2 < n && j-2 >= 0) occupied.insert(make_pair(i-1, j-2));
        if (i+1 < n && i+1 >= 0 && j-2 < n && j-2 >= 0) occupied.insert(make_pair(i+1, j-2));
        if (i+2 < n && i+2 >= 0 && j-1 < n && j-1 >= 0) occupied.insert(make_pair(i+2, j-1));
    }
    ll ans = n * n - occupied.size();
    cout << ans << endl; 
    return 0;
}