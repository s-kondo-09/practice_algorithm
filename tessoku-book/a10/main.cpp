#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    vector<int> P(n+1, A[0]);
    vector<int> Q(n+1, A[n-1]);
    rep(i,n) P[i+1] = max(P[i], A[i]);
    for (int i = n-1; i >= 0; --i) Q[i] = max(Q[i+1], A[i]);
    int d;
    cin >> d;
    rep(i,d) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << max(P[l], Q[r+1]) << endl;
    }

    return 0;
}