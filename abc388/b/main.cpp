#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> T(n);
    vector<int> L(n);
    vector<int> W(n);

    rep(i, n) cin >> T[i] >> L[i];

    rep(k, d) {
        rep(i, n) {
            L[i] += k + 1;
            W[i] = T[i] * L[i];
            L[i] -= k + 1;
        }
        cout << *max_element(W.begin(), W.end()) << endl;
    }

    return 0;
}