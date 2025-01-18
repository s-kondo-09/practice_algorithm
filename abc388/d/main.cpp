#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n+1, 0);
    vector<int> C(n, 0);  // imos法の累積和

    rep(i, n) cin >> A[i];

    rep(i, n) {
        if (i != 0) {
            C[i] = C[i-1] + B[i];  // imos法の累積和をここで計算すればよかった
            A[i] += C[i];
        }

        B[i+1]++;
        int idx = min(n, i+1+A[i]);
        B[idx]--;
        A[i] -= min(n-i-1, A[i]);
    }

    rep(i, n) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;

    return 0;
}