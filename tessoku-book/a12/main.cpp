#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll n, k;
vector<ll> A(100010);

bool check(ll x) {
    ll sum = 0;
    rep(i,n) {
        sum += x / A[i];
    }
    if (sum >= k) return true;
    return false;
}

int main() {
    cin >> n >> k;
    rep(i,n) cin >> A[i];
    ll left = 0, right = 1e9;
    ll ans;
    while (left <= right) {
        ll mid = (right + left) / 2;
        if(check(mid)) right = mid - 1;
        else left = mid + 1;
    }
    cout << left << endl;
    return 0;
}   