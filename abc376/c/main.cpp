#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    rep(i,n) cin >> A[i];
    rep(i,n-1) cin >> B[i];
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    int ans = *min_element(A.begin(), A.end());
    rep(i, n-1) {
        if (A[i] > B[i]) {
            B.push_back(A[i]);
            ans = A[i];
            break;
        }
    }
    if ((int)B.size() == n-1) B.push_back(*min_element(A.begin(), A.end()));
    sort(B.begin(), B.end(), greater<int>());
    rep(i,n) {
        if (A[i] > B[i]) {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}