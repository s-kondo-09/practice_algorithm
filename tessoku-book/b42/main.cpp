#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;
vector<ll> A(100000);
vector<ll> B(100000);

ll check(int head, int tail) {
    ll sum = 0;
    rep(i,n) {
        ll card1 = A[i], card2 = B[i];
        if (head == 1) card1 = -A[i];
        if (tail == 1) card2 = -B[i];

        if (card1 + card2 >= 0) sum += (card1 + card2);
    }
    return sum;
}

int main() {
    cin >> n;
    rep(i,n) cin >> A[i] >> B[i];
    ll ans = 0;
    rep(head, 2) {
        rep(tail, 2) {
            ans = max(ans, check(head, tail));
        }
    }
    cout << ans << endl;
    return 0;
}