#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    rep(i,n) A[i] = i + 1;
    bool isReversed = false;
    rep(i,q) {
        int query;
        cin >> query;
        if (query == 1) {
            int x, y;
            cin >> x >> y;
            x--;  // 0-indexed
            if (isReversed) A[n-x-1] = y;
            else A[x] = y;
        }
        else if (query == 2) {
            isReversed = !isReversed;
        }
        else {
            int x;
            cin >> x;
            x--;  // 0-indexed
            if (isReversed) cout << A[n-x-1] << endl;
            else cout << A[x] << endl;
        }
    }
    return 0;
}