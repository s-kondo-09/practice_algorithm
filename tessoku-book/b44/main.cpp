#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    rep(i,n) {
        rep(j,n) {
            cin >> A[i][j];
        }
    }
    vector<int> T(n);
    rep(i,n) T[i] = i;

    // query
    int q;
    cin >> q;
    rep(i,q) {
        int query, x, y;
        cin >> query >> x >> y;
        x--; y--;  // 0-indexed
        if (query == 1) {
            swap(T[x], T[y]);
        }
        else {
            cout << A[T[x]][y] << endl;
        }
    }
    return 0;
}