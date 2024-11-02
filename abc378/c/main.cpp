#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> A(n);
    vector<int> B(n);
    map<ll, int> position;
    rep(i,n) {
        cin >> A[i];
        position[A[i]] = -1;
    }
    rep(i,n) {
        B[i] = position[A[i]];
        position[A[i]] = i+1;
    }
    rep(i,n) {
        if (i) cout << " ";
        cout << B[i];
    }
    cout << endl;
    return 0;
}