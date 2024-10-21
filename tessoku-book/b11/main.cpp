#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    sort(A.begin(), A.end());
    int q;
    cin >> q;
    rep(i,q) {
        int x;
        cin >> x;
        int pos = lower_bound(A.begin(), A.end(), x) - A.begin();
        cout << pos << endl;
    }
    return 0;
}